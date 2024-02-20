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
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UTexture*                    CallFunc_GetDinoEntryIcon_ReturnValue                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

class UTexture* UPrimalItem_TaxidermyDermis_C::BPInitIconMaterial(class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_TaxidermyDermis_C", "BPInitIconMaterial");

	Params::UPrimalItem_TaxidermyDermis_C_BPInitIconMaterial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	return Parms.ReturnValue;

}

}


