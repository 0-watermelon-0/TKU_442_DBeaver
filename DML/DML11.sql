merge into "ObjectsCopy" 
using "ObjectsCopy2"
 on ("ObjectsCopy"."price" = "ObjectsCopy2"."price")
when matched 
 then update
 set "price" = "ObjectsCopy2"."price"
when not matched 
 then insert
 values ("ObjectsCopy2"."price", "ObjectsCopy2"."price");
