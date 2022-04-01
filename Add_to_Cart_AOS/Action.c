Action()
{
	
	//Making a change s

		lr_start_transaction("1_home_page_transaction");
		
	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=nimbusserver.aos.com");

	web_url("nimbusserver.aos.com:8000", 
		"URL=http://nimbusserver.aos.com:8000/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://nimbusserver.aos.com:8000/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://nimbusserver.aos.com:8000/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://nimbusserver.aos.com:8000/css/main.min.css", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=http://nimbusserver.aos.com:8000/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://nimbusserver.aos.com:8000/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://nimbusserver.aos.com:8000/css/main.min.css", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/category_banner_4.png", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=100", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ALL", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	//lr_think_time(4);

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/GetAccountConfigurationRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest_2", 
		"URL=http://nimbusserver.aos.com:8001//accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j96&a=1164436745&t=pageview&_s=1&dl=http%3A%2F%2Fnimbusserver.aos.com%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1918x928&vp=1918x785&je=0&_u=IEBAAEABAAAAAC~&jid=1076680807&gjid=2123597303&cid=2109211138.1648836162&tid=UA-81334227-1&_gid=1014954153.1648836162&_r=1&_slc=1&z=345018274", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAwLjAuNDg5Ni42MBIlCdHhEV-2reimEgUN541ADhIFDc5BTHoSBQ14bxIZEgUNDxa-Kw==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_url("search", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga=GA1.2.2109211138.1648836162; DOMAIN=nimbusserver.aos.com");

	web_add_cookie("_gid=GA1.2.1014954153.1648836162; DOMAIN=nimbusserver.aos.com");

	web_add_cookie("_gat=1; DOMAIN=nimbusserver.aos.com");

	web_url("popularProducts.json", 
		"URL=http://nimbusserver.aos.com:8000/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://nimbusserver.aos.com:8000/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);




	lr_end_transaction("1_home_page_transaction",LR_AUTO);

	lr_think_time(10);
	lr_start_transaction("2_speaker_transaction");

	web_url("products", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://nimbusserver.aos.com:8000/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);



	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:YETtwTM4Jf0KvYvIq4uHlFnzXXDDrHy18NPvERqoG-E&cup2hreq=39e10e757e80abb3c615082ba1807d02e66325f64a1616bf1b0dbae889596026", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{fb15bbff-ce25-4f14-a3eb-9cc4703874ee}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{02e6975a-437b-41a4-bdff-d1ceeddacb73}\","
		"\"rd\":5569},\"updatecheck\":{},\"version\":\"4.10.2449.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{9421c4c0-e7fd-4d34-be24-3e04395e6411}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEA\",\"cohort\":\"1:bm1:\",\""
		"cohorthint\":\"M54AndUp\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.93823a4e71e764b932ee22dfcf84c24429867a440c5e480e55be527ac30de1ae\"}]},\"ping\":{\"ping_freshness\":\"{945a62b8-9b91-440a-ad0a-618418d5331b}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"9.34.0\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GCEA\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.060e67cecbf0f9b2393922bd418567e2ca57eda9a04dbc55eea9f544dcf824b1\"}]},\"ping\":{\"ping_freshness\":\"{354f41f2-fd71-4840-90bf-1c22dbf5a644}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"324\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GCEA\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a1dbd992522087ec916f08a112434c240e6dda6764366666a4525e97378945a9\"}]},\"ping\":{\"ping_freshness\":\""
		"{e0e6fe3f-0858-4565-86e7-95426950acf5}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"2022.3.24.2\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEA\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{9ee6f85f-e110-4997-b0fe-49ab2f21b46b}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\""
		"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEA\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.2c15227a2823f31c7f3728e85a39bd87040d30562f3fa8d1c6faeb20f93e3cc8\"}]},\"ping\":{\"ping_freshness\":\"{ad324de7-7ae7-4993-ac57-c471a8cb7e6e}\",\"rd\":5569},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"50\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GCEA\",\""
		"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.7fb3d2fbd34e9a8ee856e667e95b0c74858f4598dcda14dd323bac00b5198a5a\"}]},\"ping\":{\"ping_freshness\":\"{fd675f16-46dd-4cf0-b7a0-2ce1e8640423}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"20220315.435616495\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{729baef6-56be-4d8c-a3dd-063321df98ce}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GCEA\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.db60fc5d4ab81e28fe58d82f3ad26622c4ca4cade28e2b636068ac91ca62224d\"}]},\"ping\":{\"ping_freshness\":\""
		"{06ae1ac9-f104-4778-bd5a-7c5da99f9471}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"1.0.7.1642025427\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEA\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c4afda8b13c751a8f1f7f4540a9bf1e28f1a6b60d8fa4e94d78b8d8893af3218\"}]},\"ping\":{\"ping_freshness\":\"{cd7538d9-267c-4347-aaff-51ae53bda25c}\",\"rd\":5569},\"tag\":\"eset_exp_b\",\"updatecheck\":{},"
		"\"version\":\"99.280.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEA\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{18e04319-7f66-41dd-a473-efe4620171f6}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GCEA\",\""
		"cohort\":\"1:zkl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b3a2d4f4397e9c3099cdd9cdd2e17b6a4188725082654e4dd461ba4ed16ff873\"}]},\"ping\":{\"ping_freshness\":\"{fcff02b5-7c06-4460-8185-c09dddfe72fe}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"219\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEA\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{"
		"\"fp\":\"1.1634c0e29d2388ec9edde2e55669b10099f658933febbc0ebf5519384b242d3d\"}]},\"ping\":{\"ping_freshness\":\"{c53a8a5c-8e24-4478-b042-5fa82f2a7ef5}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"2793\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEA\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80AndAbove\",\"cohortname\":\"M80AndAbove\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.714ea234b405e2326659d92eef98a34bd7343d2aba26bf425b66521c9846fbcf\"}]},\"ping\":{\""
		"ping_freshness\":\"{60b957fc-d298-44e1-b4b8-f5020cee6695}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"2022.3.28.1141\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEA\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.8eb15a001fdc6f1e3e4961091951a38f002c8579e3de78d495a1c0cd2274aff7\"}]},\"ping\":{\"ping_freshness\":\"{27ad3792-eead-4aa1-bbb4-74f53974eda2}\",\"rd\":5569},\"updatecheck\":{},\"version\""
		":\"7250\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"GCEA\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.8b9dc2cd32d1b5f147a17377cef75ec160103d6c02faf4947978fb6d9a25983b\"}]},\"ping\":{\"ping_freshness\":\"{0fbfb860-1ff9-4204-abeb-819a300d5199}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"20211020.1\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GCEA\",\"cohort\":\"1:w0x:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{5c77ba22-0e95-41f4-8584-39beb6fb698e}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"GCEA\",\"cohort\":\"1:vz3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a\"}]},\"ping\":{\"ping_freshness\":\"{8949e034-1fa9-4654-95ff-ba0e4496d8be}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"2021.8.17.1300\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"GCEA\",\"cohort\":\"1:zor:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c5d1f68a61e1a2ea56b08431b1e9de8bca675e76bed24772447af68d35436d50\"}]},\"ping\":{\"ping_freshness\":\""
		"{988b1bb7-8e5c-42a4-82d7-dadf50ebb1dd}\",\"rd\":5569},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"27.8\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GCEA\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.684cad60e69bfdd0e85a36d0bf212f7aee20debbec57d607dda6a455fc35b506\"}]},\"ping\":{\"ping_freshness\":\"{8e748d2c-a0ef-4555-82a2-9cd00564d12b}\",\"rd\":5569},\"updatecheck\":{},\"version\":\""
		"102.0.4977.0\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GCEA\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{99a7cbb2-12fe-4bac-a8c5-3104a9a34482}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"_internal_experimental_sets\":\"false\",\"_v2_format_plz\":\"true\",\"appid\":\""
		"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GCEA\",\"cohort\":\"1:13c9:\",\"cohorthint\":\"V2 General release\",\"cohortname\":\"V2 General release\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\"{84634c1f-ec7b-49e6-bd33-24cac308bcca}\",\"rd\":5569},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\""
		"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.2300\"},\"prodversion\":\"100.0.4896.60\",\"protocol\":\"3.1\",\"requestid\":\"{9327b5f9-441d-4e0d-b113-19cdafca3533}\",\"sessionid\":\"{a0c38283-790d-438c-9d51-e56ec5536961}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,"
		"\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.122\"},\"updaterversion\":\"100.0.4896.60\"}}", 
		LAST);
	
	lr_end_transaction("2_speaker_transaction",LR_AUTO);

	lr_think_time(8);

	lr_start_transaction("3_Roar_Speaker_transaction");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GCEA\",\"cohort\":\"1:zkl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":8149,\"downloaded\":141169,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"220\",\"previousversion\":\"219\",\"total\":141169,\"url\":\"http://edgedl.me.gvt1.com/edgedl/release2/"
		"chrome_component/kepc2352gpgzmz2e44euy6njse_220/efniojlnjndmcbiieegkicadnoecjjef_220_all_adsm3d3h5yxvk2ss4ag5fn7vquvq.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.32ab5f66017dacf57c0925a075fe01f2e12904c4aada54804353114e4b360534\",\"nextversion\":\"220\",\"previousfp\":\"1.b3a2d4f4397e9c3099cdd9cdd2e17b6a4188725082654e4dd461ba4ed16ff873\",\"previousversion\":\"219\"}],\"packages\":{\"package\":[{\"fp\":\"1.32ab5f66017dacf57c0925a075fe01f2e12904c4aada54804353114e4b360534\"}]},\"version"
		"\":\"220\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.2300\"},\"prodversion\":\"100.0.4896.60\",\"protocol\":\"3.1\",\"requestid\":\"{a6b20ed9-b651-40a1-ba62-2f5a2170f60f}\",\"sessionid\":\""
		"{a0c38283-790d-438c-9d51-e56ec5536961}\",\"updaterversion\":\"100.0.4896.60\"}}", 
		LAST);

	web_url("all_data", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("24", 
		"URL=http://nimbusserver.aos.com:8002/catalog/api/v1/products/24", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://nimbusserver.aos.com:8000/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("3_Roar_Speaker_transaction",LR_AUTO);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A24%2C%22imageUrl%22%3A%224600%22%2C%22productName%22%3A%22HP%20Roar%20Mini%20Wireless%20Speaker%22%2C%22color%22%3A%7B%22code%22%3A%22DD3A5B%22%2C%22name%22%3A%22RED%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A301%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A44.99%2C%22hasWarranty%22%3Afalse%7D%5D%7D; DOMAIN=nimbusserver.aos.com");

	lr_think_time(8);

	web_url("shoppingCart.html", 
		"URL=http://nimbusserver.aos.com:8000/app/views/shoppingCart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	//lr_think_time(12);

	lr_start_transaction("4_Checkout_transaction");

	web_url("ping", 
		"URL=https://clients1.google.com/tools/pso/ping?as=chrome&brand=GCEA&pid=&hl=en&rep=2&rlz=C1:1C1GCEA_enUS998US998,C2:1C2GCEA_enUS998,C7:1C7GCEA_enUS998", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user-not-login-page.html", 
		"URL=http://nimbusserver.aos.com:8000/app/order/views/user-not-login-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://nimbusserver.aos.com:8000/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("4_Checkout_transaction",LR_AUTO);

	return 0;
}