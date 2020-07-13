import requests
import logging
import threading
import time

logging.basicConfig(filename="logs/dumb.log",format='%(asctime)s : %(message)s',filemode='w')
logger = logging.getLogger()
logger.setLevel(logging.DEBUG)

accept=0
reject=0

def run(i):
	global accept
	global reject
	logger.debug("Sending request : " + str(i))
	try:
		res=requests.get('http://jksacademy.com/')
		accept = accept + 1
		logger.debug(str(i) + "  " + str(res.status_code) + " " + str(res.elapsed))
	except:
		reject = reject + 1

	logger.info("Accepted : " + str(accept) + "   Rejected : " + str(reject))

if __name__ == "__main__":
	logger.info("\n---------------------------------------------------\n")
	logger.info("Runner Started \n ")

	n = int(input())
	start = time.time()

	threads = []
	for i in range(1,n+1):
		tt = threading.Thread(target=run,args=(i,))
		tt.start()
		threads.append(tt)
		if i%3000==0 or threading.active_count()>3000:
			time.sleep(10)

	for i in range(n):
		threads[i].join()

	end = time.time()
	logger.info("Total Consumed Time: " + str(end-start))
