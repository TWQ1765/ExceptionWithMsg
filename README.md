# Exception_r

## goto Project.yml 
### line no 8 use_exceptions: TRUE
### line no 45 - CEXCEPTION_USE_CONFIG_FILE
## should have:
### CExceptionConfig.h

## when apply Try Catch cant have TEST_ASSERT_....
### Try{
###	  name = getName(1);
###	  TEST_ASSERT_EQUAL_STRING("David", name);
### }Catch(e) {
###	  TEST_FAIL_MESSAGE("Expected not to be thrown, but received one.");
### }		

### 
