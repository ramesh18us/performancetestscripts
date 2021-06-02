Action()
{
	lr_start_transaction("test2");
	
	lr_think_time(5);
	
	lr_end_transaction("test2", LR_AUTO);
	
	return 0;
}
