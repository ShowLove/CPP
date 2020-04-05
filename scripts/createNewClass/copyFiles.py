import shutil # to copy files
import os     # to change directories using os 

##########################################
# assuming the following folder structure
# topDir -> scripts -> createNewClass
# topDir -> repo1
# topDir -> repo2
##########################################

class copyFiles(object):

  def __init__(self):
    self.fooVar = 2
    self.repoName   = "codeQs"
    self.headerFile = "Foo.h"
    self.srcFile    = "Foo.cpp"
    self.testFile   = "FooTest.cpp"
    #name of new class
    self.className  = "ReverseStr"
    self.pathToTopLevlDir = "../../"

  def getSriptDir(self):
    # get script directory
    pythonDir = os.getcwd()
    print("scriptDir:" + "\t\t" + pythonDir)
    return pythonDir

  def getTopLevelDir(self):
    # get top level directory
    os.chdir(self.pathToTopLevlDir)
    topLevelDir = os.getcwd()
    print("topLevelDir:" + "\t\t" + topLevelDir)
    return topLevelDir

  def getRepoDir(self):
    # get repo directory
    os.chdir('codeQs')
    repoDir = os.getcwd()
    print("repoDir:" + "\t\t" + repoDir)
    return repoDir

  def getTestDir(self):
    # get test directory
    os.chdir('tests')
    testDir = os.getcwd()
    print("testDir:" + "\t\t" + repoDir)
    return testDir

  def getGenericCodeDir(self, topLevelDir):
    # get generic code directory
    os.chdir(topLevelDir)
    os.chdir('syntax/codeTemplate')
    templateCodeDir = os.getcwd()
    print("templateCodeDir:" + "\t" + templateCodeDir)
    return templateCodeDir

  def fileExists(self, path):
    if os.path.isfile(path):
        print ("Successfuly created:\t\t" + path)
    else:
        print ("Failed to create:\t\t" + path)    

###################################
# Run the code
##################################
print("Copy Files Script: \n")

obj = copyFiles()

pythonDir   = obj.getSriptDir()
topLevelDir = obj.getTopLevelDir()
repoDir     = obj.getRepoDir()
testDir     = obj.getTestDir()
templateCodeDir = obj.getGenericCodeDir(topLevelDir)

# Choose your source and destination directory
sourceDir = templateCodeDir
dstDir    = repoDir

# Chose your srouce files
sourceHeader = sourceDir + "/" + obj.headerFile
sourceSrc    = sourceDir + "/" + obj.srcFile
sourceTest   = sourceDir + "/" + obj.testFile

# Chose your destination files
dstHeader    = dstDir  + "/" + obj.className + ".h"
dstSrc       = dstDir  + "/" + obj.className + ".cpp"
dstTest      = testDir + "/" + obj.className + "Test.cpp"

print("\nmoving: \n" + sourceHeader + "\n"+ sourceSrc + "\n"+ sourceTest + "\n")
print("to: \n" + dstHeader + "\n"+ dstSrc + "\n"+ dstTest + "\n")

# Copy files over
shutil.copy(sourceHeader, dstHeader)
shutil.copy(sourceSrc, dstSrc)
shutil.copy(sourceTest, dstTest)

# Check that all files are there
obj.fileExists(dstHeader)
obj.fileExists(dstSrc)
obj.fileExists(dstTest)




