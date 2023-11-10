import os
import datetime

class BatchLog:
    def __init__(self) -> None:
        pass
    
    def write_to_log(self,log_list,id):
        self.init_batch_log()
        with open(os.getcwd() + "/log/batch_log.txt","a",encoding="utf-8") as bl:
            if(id == "create"):
                bl.write("Bach name--" + log_list[0] + "\n")
                bl.write("Read from--" + log_list[1] + "\n")
                bl.write("Master folder--" + log_list[2] + "\n")
    
    def read_from_log(self):
        batch = []
        with open(os.getcwd() + "/log/batch_log.txt","r",encoding="utf-8") as sl:
            batch = sl.readlines()
        return batch
    
    def init_batch_log(self):
        if(os.path.exists(os.getcwd() + "/log/batch_log.txt")): return
        else:
            with open(os.getcwd() + "/log/batch_log.txt","w+") as bl:
                bl.write("Initializing batch log file--" + str(datetime.datetime.now()) + "\n")
                
    def remove_log(self):
        path = os.getcwd() + "/log/batch_log.txt"
        if os.path.exists(path):
            os.remove(path)
        
    