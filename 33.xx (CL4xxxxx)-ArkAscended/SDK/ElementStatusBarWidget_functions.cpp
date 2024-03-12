#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ElementStatusBarWidget.ElementStatusBarWidget_C
// (None)

class UClass* UElementStatusBarWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementStatusBarWidget_C");

	return Clss;
}


// ElementStatusBarWidget_C ElementStatusBarWidget.Default__ElementStatusBarWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementStatusBarWidget_C* UElementStatusBarWidget_C::GetDefaultObj()
{
	static class UElementStatusBarWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementStatusBarWidget_C*>(UElementStatusBarWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ElementStatusBarWidget.ElementStatusBarWidget_C.UpdateBoostIconVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UPrimalItemArmor_TekShirt_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Shirt                 (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class ABuff_TekArmor_C*            K2Node_DynamicCast_AsBuff_Tek_Armor                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_HideBoostIcon_ShouldSet                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_HideBoostIcon_WithValue                                 (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class APrimalBuff* UElementStatusBarWidget_C::UpdateBoostIconVisibility(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor, bool* K2Node_DynamicCast_bSuccess_3, bool CallFunc_HideBoostIcon_ShouldSet, bool CallFunc_HideBoostIcon_WithValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElementStatusBarWidget_C", "UpdateBoostIconVisibility");

	Params::UElementStatusBarWidget_C_UpdateBoostIconVisibility_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_AsBuff_Tek_Armor = K2Node_DynamicCast_AsBuff_Tek_Armor;
	Parms.CallFunc_HideBoostIcon_ShouldSet = CallFunc_HideBoostIcon_ShouldSet;
	Parms.CallFunc_HideBoostIcon_WithValue = CallFunc_HideBoostIcon_WithValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	return Parms.ReturnValue;

}

}


