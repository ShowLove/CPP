import subprocess # to run bash script
import copyFiles as cFiles
import makeCompilable as compilable

def main():
  # Copy and rename template files to src and test directory 
  copyObj = cFiles.copyFiles()
  copyObj.moveFiles()
  # Update the src header and test file such that it will compile 
  compObj = compilable.makeCompilable()
  compObj.makeClassCompilable()
  # Test compile 
  rc = subprocess.call("./runCodeQsTests.sh")

if __name__ == "__main__":
    # execute only if run as a script
    main()