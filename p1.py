import subprocess
command = subprocess.run(["netsh","wlan","export","profile","key=clear"], capture_output = True).stdout.decode