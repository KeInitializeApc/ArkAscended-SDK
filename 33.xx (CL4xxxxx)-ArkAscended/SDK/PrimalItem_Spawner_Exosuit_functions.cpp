#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C
// (None)

class UClass* UPrimalItem_Spawner_Exosuit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_Spawner_Exosuit_C");

	return Clss;
}


// PrimalItem_Spawner_Exosuit_C PrimalItem_Spawner_Exosuit.Default__PrimalItem_Spawner_Exosuit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_Spawner_Exosuit_C* UPrimalItem_Spawner_Exosuit_C::GetDefaultObj()
{
	static class UPrimalItem_Spawner_Exosuit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_Spawner_Exosuit_C*>(UPrimalItem_Spawner_Exosuit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.BPCanUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIgnoreCooldown                                                  (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CanUse_                                                          (ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BPCanUse_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AMissionType*                CallFunc_GetActiveMission_ReturnValue                            (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPrimalItem_Spawner_Exosuit_C::BPCanUse(bool CanUse_, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Spawner_Exosuit_C", "BPCanUse");

	Params::UPrimalItem_Spawner_Exosuit_C_BPCanUse_Params Parms{};

	Parms.CanUse_ = CanUse_;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.GetStatDisplayString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPrimalCharacterStatusValueStat                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// int32                              StatConvertMapIndex                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      StatDisplay                                                      (ConstParm, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      ValueDisplay                                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ShowInTooltip                                                    (Edit, ConstParm, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_GetStatDisplayString_StatDisplay                        (BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetStatDisplayString_ValueDisplay                       (ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetStatDisplayString_ShowInTooltip                      (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

class FString UPrimalItem_Spawner_Exosuit_C::GetStatDisplayString(int32* Value, const class FString& CallFunc_GetStatDisplayString_StatDisplay, const class FString& CallFunc_GetStatDisplayString_ValueDisplay, bool* CallFunc_GetStatDisplayString_ShowInTooltip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Spawner_Exosuit_C", "GetStatDisplayString");

	Params::UPrimalItem_Spawner_Exosuit_C_GetStatDisplayString_Params Parms{};

	Parms.CallFunc_GetStatDisplayString_StatDisplay = CallFunc_GetStatDisplayString_StatDisplay;
	Parms.CallFunc_GetStatDisplayString_ValueDisplay = CallFunc_GetStatDisplayString_ValueDisplay;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	if (CallFunc_GetStatDisplayString_ShowInTooltip != nullptr)
		*CallFunc_GetStatDisplayString_ShowInTooltip = Parms.CallFunc_GetStatDisplayString_ShowInTooltip;

	return Parms.ReturnValue;

}

}


