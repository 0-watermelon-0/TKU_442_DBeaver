SELECT  "ProductID"  ,"Name" ,
COALESCE ("Size","Color" ,'UNKNOWN' ) as  Measurement
FROM "Production"."Product"  ; 
