import os
import datetime

class SettingsLog:
    def __init__(self) -> None:
        pass
    
    def write_to_log(self,log_list):
        self.init_settings_log()
        with open(os.getcwd() + "/log/settings_log.txt","a",encoding="utf-8") as sl:
            sl.write("Root directory--" + str(log_list[0]) + "\n")
            sl.write("Default split number--" + log_list[1] + "\n")
            sl.write("Key hash--" + log_list[2] + "\n")
            sl.write("Robustness parameter--" + log_list[3] + "\n")
    
    def read_from_log(self):
        settings = []
        self.init_settings_log()
        with open(os.getcwd() + "/log/settings_log.txt","r",encoding="utf-8") as sl:
            settings = sl.readlines()
        return settings
    
    def init_settings_log(self):
        if(os.path.exists(os.getcwd() + "/log/settings_log.txt")): return
        else:
            with open(os.getcwd() + "/log/settings_log.txt","w+") as sl:
                sl.write("Initializing settings log file -- " + str(datetime.datetime.now()) + "\n")
    
    def remove_log(self):
        path = os.getcwd() + "/log/settings_log.txt"
        if os.path.exists(path):
            os.remove(path)