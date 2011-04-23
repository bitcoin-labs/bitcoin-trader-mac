//
//  ServiceManager.h
//  MtGoxTrader
//
//  Created by Sheldon Thomas on 4/22/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

// Mt Gox charges a small fee (0.65%) for each trade.

#define TickerDataEndpoint @"http://mtgox.com/code/data/ticker.php"
#define MarketDepthEndpoint @"http://mtgox.com/code/data/getDepth.php"
#define RecentTradesEndpoint @"http://mtgox.com/code/data/getTrades.php"

// The following take your Mt Gox username and password as parameters. They must be sent as a POST.

#define BalanceEndpoint @"https://mtgox.com/code/getFunds.php?name=blah&pass=blah"

// returns a list of open orders.
#define PurchaseEndpoint @"https://mtgox.com/code/buyBTC.php?name=blah&pass=blah&amount=#&price=#"
#define SellEndpoint @"https://mtgox.com/code/sellBTC.php?name=blah&pass=blah&amount=#&price=#"

// Fetch a list of open orders.
// oid:Order ID type: 1:sell 2:buy
// status: 1:active 2:short on funds
#define OrdersEndpoint @"https://mtgox.com/code/getOrders.php?name=blah&pass=blah"


#define CancelEndpoint @"https://mtgox.com/code/cancelOrder.php?name=blah&pass=blah&oid=#&type=#"

#define PricesEndpoint @"http://bitcoincharts.com/t/weighted_prices.json"

// Just in case
// http://mtgox.com/code/data/getAllTrades.php