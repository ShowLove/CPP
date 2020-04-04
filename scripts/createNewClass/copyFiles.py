import shutil # to copy files
import os     # to change directories using os

repoName   = "codeQs"
headerFile = "Foo.h"
srcFile    = "Foo.cpp"
testFile   = "FooTest.cpp"
#name of new class
className  = "ReverseStr"
pathToTopLevlDir = "../../"

##########################################
# assuming the following folder structure
# topDir -> scripts -> createNewClass
# topDir -> repo1
# topDir -> repo2
##########################################

# get script directory
pythonDir = os.getcwd()
print("scriptDir:" + "\t\t" + pythonDir)

# get top level directory
os.chdir(pathToTopLevlDir)
topLevelDir = os.getcwd()
print("topLevelDir:" + "\t\t" + topLevelDir)

# get repo directory
os.chdir('codeQs')
repoDir = os.getcwd()
print("repoDir:" + "\t\t" + repoDir)

# get test directory
os.chdir('tests')
testDir = os.getcwd()
print("testDir:" + "\t\t" + repoDir)

# get generic code directory
os.chdir(topLevelDir)
os.chdir('syntax/codeTemplate')
templateCodeDir = os.getcwd()
print("templateCodeDir:" + "\t" + templateCodeDir)

# Choose your source and destination directory
sourceDir = templateCodeDir
dstDir    = repoDir

# Chose your srouce files
sourceHeader = sourceDir + "/" + headerFile
sourceSrc    = sourceDir + "/" + srcFile
sourceTest   = sourceDir + "/" + testFile

# Chose your destination files
dstHeader    = dstDir  + "/" + className + ".h"
dstSrc       = dstDir  + "/" + className + ".cpp"
dstTest      = testDir + "/" + className + "Test.cpp"

print("\nmoving: \n" + sourceHeader + "\n"+ sourceSrc + "\n"+ sourceTest + "\n")
print("to: \n" + dstHeader + "\n"+ dstSrc + "\n"+ dstTest + "\n")


shutil.copy(sourceHeader, dstHeader)
shutil.copy(sourceSrc, dstSrc)
shutil.copy(sourceTest, dstTest)

if os.path.isfile(dstHeader):
    print ("Successfuly created:\t\t" + dstHeader)
else:
    print ("Failed to create:\t\t" + dstHeader)

if os.path.isfile(dstSrc):
    print ("Successfuly created:\t\t" + dstSrc)
else:
    print ("Failed to create:\t\t" + dstSrc)

if os.path.isfile(dstTest):
    print ("Successfuly created:\t\t" + dstTest)
else:
    print ("Failed to create:\t\t" + dstTest)




