--Показать поля ProductId, UnitPrice и OrderQty из таблицы Purchasing.PurchaseOrderDetail
--где количество заказанного товара (OrderQty) больше 60
--а цена (UnitPrice) находится в диапазоне от $50 до $100.
SELECT  "ProductID"  
,"UnitPrice" 
, "OrderQty" 
FROM "Purchasing"."PurchaseOrderDetail" 
where ("OrderQty" >= '60' or "UnitPrice" >= '50' or "UnitPrice" <= '100')
;
