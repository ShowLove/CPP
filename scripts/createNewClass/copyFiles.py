import shutil # to copy files
import os     # to change directories using os

# TODO
# 1 should be only one getDir function
# 2 add conditional parameters
# 3 make file paths adjustable easily

##########################################
# assuming the following folder structure
# topDir -> scripts -> createNewClass
# topDir -> repo1
# topDir -> repo2
##########################################

class copyFiles(object):

  def __init__(self):
    self.printDebug  = False
    self.fooVar = 2
    self.repoName   = "codeQs"
    self.nameSpace  = self.repoName
    self.headerFile = "Foo.h"
    self.srcFile    = "Foo.cpp"
    self.testFile   = "FooTest.cpp"
    #name of new class
    self.className  = "ReverseStr"
    self.pathToTopLevlDir = "../../"

  def getSriptDir(self):
    # get script directory
    pythonDir = os.getcwd()
    if self.printDebug : print("scriptDir:" + "\t\t" + pythonDir)
    return pythonDir

  def getTopLevelDir(self):
    # get top level directory
    os.chdir(self.pathToTopLevlDir)
    topLevelDir = os.getcwd()
    if self.printDebug : print("topLevelDir:" + "\t\t" + topLevelDir)
    return topLevelDir

  def getRepoDir(self):
    # get repo directory
    os.chdir('codeQs')
    repoDir = os.getcwd()
    if self.printDebug : print("repoDir:" + "\t\t" + repoDir)
    return repoDir

  def getTestDir(self):
    # get test directory
    os.chdir('tests')
    testDir = os.getcwd()
    if self.printDebug : print("testDir:" + "\t\t" + testDir)
    return testDir

  def getGenericCodeDir(self, topLevelDir):
    # get generic code directory
    os.chdir(topLevelDir)
    os.chdir('syntax/codeTemplate')
    templateCodeDir = os.getcwd()
    if self.printDebug : print("templateCodeDir:" + "\t" + templateCodeDir)
    return templateCodeDir

  def getSourceDirs(self):
    # Get all relevant directories
    pythonDir   = self.getSriptDir()
    topLevelDir = self.getTopLevelDir()
    repoDir     = self.getRepoDir()
    testDir     = self.getTestDir()
    templateCodeDir = self.getGenericCodeDir(topLevelDir)

    # Final destination path + fileName
    sourceDir = templateCodeDir
    sourceHeader = sourceDir + "/" + self.headerFile
    sourceSrc    = sourceDir + "/" + self.srcFile
    sourceTest   = sourceDir + "/" + self.testFile

    #return the directories that will be used by shutil
    return sourceHeader, sourceSrc, sourceTest  

  def getDstDirs(self):
    # Get all relevant directories
    pythonDir   = self.getSriptDir()
    topLevelDir = self.getTopLevelDir()
    repoDir     = self.getRepoDir()
    testDir     = self.getTestDir()
    templateCodeDir = self.getGenericCodeDir(topLevelDir)

    # Choose your source and destination directory
    dstDir = repoDir
    dstHeader    = dstDir  + "/" + self.className + ".h"
    dstSrc       = dstDir  + "/" + self.className + ".cpp"
    dstTest      = testDir + "/" + self.className + "Test.cpp"

    #return the directories that will be used by shutil
    return dstHeader, dstSrc, dstTest

  def fileExists(self, path):
    if os.path.isfile(path):
        if self.printDebug : print ("Successfuly created:\t\t" + path)
    else:
        if self.printDebug : print ("Failed to create:\t\t" + path)  

  # This is the main function to be called by other classes
  def moveFiles(self):
    # get source and destination directories
    dstHeader, dstSrc, dstTest = self.getDstDirs()
    sourceHeader, sourceSrc, sourceTest = self.getSourceDirs()

    if self.printDebug : print("\nmoving: \n" + sourceHeader + "\n"+ sourceSrc + "\n"+ sourceTest + "\n")
    if self.printDebug : print("to: \n" + dstHeader + "\n"+ dstSrc + "\n"+ dstTest + "\n")

    # Copy files over
    shutil.copy(sourceHeader, dstHeader)
    shutil.copy(sourceSrc, dstSrc)
    shutil.copy(sourceTest, dstTest)

    # Check that all files are there
    self.fileExists(dstHeader)
    self.fileExists(dstSrc)
    self.fileExists(dstTest)

  # for other classes to use
  def getClassName(self):
    return self.className

  def getNameSpace(self):
    return self.nameSpace

###################################
# Run the code
##################################
#if self.printDebug : print("Copy Files Script: \n")
#obj = copyFiles()
#obj.moveFiles()





