#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_TaxidermyDermis.PrimalItem_TaxidermyDermis_C
// (None)

class UClass* UPrimalItem_TaxidermyDermis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_TaxidermyDermis_C");

	return Clss;
}


// PrimalItem_TaxidermyDermis_C PrimalItem_TaxidermyDermis.Default__PrimalItem_TaxidermyDermis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_TaxidermyDermis_C* UPrimalItem_TaxidermyDermis_C::GetDefaultObj()
{
	static class UPrimalItem_TaxidermyDermis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_TaxidermyDermis_C*>(UPrimalItem_TaxidermyDermis_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_TaxidermyDermis.PrimalItem_TaxidermyDermis_C.BPInitIconMaterial
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UTexture*                    CallFunc_GetDinoEntryIcon_ReturnValue                            (ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)

class UTexture* UPrimalItem_TaxidermyDermis_C::BPInitIconMaterial(class UClass* CallFunc_Array_Get_Item, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_TaxidermyDermis_C", "BPInitIconMaterial");

	Params::UPrimalItem_TaxidermyDermis_C_BPInitIconMaterial_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


