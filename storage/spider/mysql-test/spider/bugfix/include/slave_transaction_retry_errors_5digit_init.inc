--disable_warnings
--disable_query_log
--disable_result_log
--source ../t/test_init.inc
--source ../t/slave_test_init.inc
--connection slave1_1
--source ../include/init_spider.inc
--enable_result_log
--enable_query_log
--enable_warnings