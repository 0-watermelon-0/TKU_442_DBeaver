SELECT  "ProductID"  
,"UnitPrice" 
, "OrderQty" 
FROM "Purchasing"."PurchaseOrderDetail" 
where ("OrderQty" >= '60' or "UnitPrice" >= '50' or "UnitPrice" <= '100')
;
