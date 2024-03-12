#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C
// (None)

class UClass* UPrimalItem_Spawner_HoverSail_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_Spawner_HoverSail_Parent_C");

	return Clss;
}


// PrimalItem_Spawner_HoverSail_Parent_C PrimalItem_Spawner_HoverSail_Parent.Default__PrimalItem_Spawner_HoverSail_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_Spawner_HoverSail_Parent_C* UPrimalItem_Spawner_HoverSail_Parent_C::GetDefaultObj()
{
	static class UPrimalItem_Spawner_HoverSail_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_Spawner_HoverSail_Parent_C*>(UPrimalItem_Spawner_HoverSail_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.BPGetItemDescription
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InDescription                                                    (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bGetLongDescription                                              (Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      Ret_string                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPrimalItem_Spawner_HoverSail_Parent_C::BPGetItemDescription(class AShooterPlayerController** ForPC, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Spawner_HoverSail_Parent_C", "BPGetItemDescription");

	Params::UPrimalItem_Spawner_HoverSail_Parent_C_BPGetItemDescription_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	return Parms.ReturnValue;

}


// Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.notify hoversail destroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AController*                 CallFunc_GetCharacterController_ReturnValue                      (ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

bool UPrimalItem_Spawner_HoverSail_Parent_C::Notify_hoversail_destroyed(class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AController** CallFunc_GetCharacterController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Spawner_HoverSail_Parent_C", "notify hoversail destroyed");

	Params::UPrimalItem_Spawner_HoverSail_Parent_C_Notify_hoversail_destroyed_Params Parms{};

	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCharacterController_ReturnValue != nullptr)
		*CallFunc_GetCharacterController_ReturnValue = Parms.CallFunc_GetCharacterController_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.Delaymount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_TryMultiUse_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)

bool UPrimalItem_Spawner_HoverSail_Parent_C::Delaymount(class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Spawner_HoverSail_Parent_C", "Delaymount");

	Params::UPrimalItem_Spawner_HoverSail_Parent_C_Delaymount_Params Parms{};

	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.BPCanUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIgnoreCooldown                                                  (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Can_use                                                          (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BPCanUse_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetDurabilityPercentage_ReturnValue                     (Edit, ConstParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_BPGetPercentStatusValue_ReturnValue                     (Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_2                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_1                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_2                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

double UPrimalItem_Spawner_HoverSail_Parent_C::BPCanUse(class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_1, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_2, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Spawner_HoverSail_Parent_C", "BPCanUse");

	Params::UPrimalItem_Spawner_HoverSail_Parent_C_BPCanUse_Params Parms{};

	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_1 = CallFunc_GetOwnerPlayer_ReturnValue_1;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_2 = CallFunc_GetOwnerPlayer_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.SpawnCraftedSkiff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItem_Spawner_HoverSail_Parent_C::SpawnCraftedSkiff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Spawner_HoverSail_Parent_C", "SpawnCraftedSkiff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_GetDinoStat_NumDinoLevels                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetDinoStat_StatMapIndexUsed                            (Edit, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetDinoStat_Success                                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GetDinoColorizationData_HasAnyColorData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<uint8>                      CallFunc_GetDinoColorizationData_ColorData                       (Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class AController*                 CallFunc_GetCharacterController_ReturnValue                      (ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_SpawnCustomDino_ReturnValue                             (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AGameState*                  CallFunc_GameStateBaseToGameState_ReturnValue                    (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameState*           CallFunc_GameStateToShooterGameState_ReturnValue                 (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_FindValidLocationNextToTarget_OutLocation               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_FindValidLocationNextToTarget_ReturnValue               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, SubobjectReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (EditFixedSize, EditConst, SubobjectReference)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (BlueprintVisible, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

struct FRotator UPrimalItem_Spawner_HoverSail_Parent_C::ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Parent(int32* EntryPoint, int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32* CallFunc_GetDinoStat_NumDinoLevels, int32* CallFunc_GetDinoStat_StatMapIndexUsed, bool* CallFunc_GetDinoStat_Success, int32* CallFunc_MakeLiteralInt_ReturnValue, bool* CallFunc_GetDinoColorizationData_HasAnyColorData, TArray<uint8>* CallFunc_GetDinoColorizationData_ColorData, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, class AController** CallFunc_GetCharacterController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** CallFunc_SpawnCustomDino_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, float* CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Spawner_HoverSail_Parent_C", "ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Parent");

	Params::UPrimalItem_Spawner_HoverSail_Parent_C_ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Parent_Params Parms{};

	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_GetDinoStat_NumDinoLevels != nullptr)
		*CallFunc_GetDinoStat_NumDinoLevels = Parms.CallFunc_GetDinoStat_NumDinoLevels;

	if (CallFunc_GetDinoStat_StatMapIndexUsed != nullptr)
		*CallFunc_GetDinoStat_StatMapIndexUsed = Parms.CallFunc_GetDinoStat_StatMapIndexUsed;

	if (CallFunc_GetDinoStat_Success != nullptr)
		*CallFunc_GetDinoStat_Success = Parms.CallFunc_GetDinoStat_Success;

	if (CallFunc_MakeLiteralInt_ReturnValue != nullptr)
		*CallFunc_MakeLiteralInt_ReturnValue = Parms.CallFunc_MakeLiteralInt_ReturnValue;

	if (CallFunc_GetDinoColorizationData_HasAnyColorData != nullptr)
		*CallFunc_GetDinoColorizationData_HasAnyColorData = Parms.CallFunc_GetDinoColorizationData_HasAnyColorData;

	if (CallFunc_GetDinoColorizationData_ColorData != nullptr)
		*CallFunc_GetDinoColorizationData_ColorData = std::move(Parms.CallFunc_GetDinoColorizationData_ColorData);

	if (CallFunc_BreakTransform_Rotation != nullptr)
		*CallFunc_BreakTransform_Rotation = std::move(Parms.CallFunc_BreakTransform_Rotation);

	if (CallFunc_IsRunningOnServer_OutNetworkMode != nullptr)
		*CallFunc_IsRunningOnServer_OutNetworkMode = Parms.CallFunc_IsRunningOnServer_OutNetworkMode;

	if (CallFunc_GetCharacterController_ReturnValue != nullptr)
		*CallFunc_GetCharacterController_ReturnValue = Parms.CallFunc_GetCharacterController_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_SpawnCustomDino_ReturnValue != nullptr)
		*CallFunc_SpawnCustomDino_ReturnValue = Parms.CallFunc_SpawnCustomDino_ReturnValue;

	if (CallFunc_MakeRotator_Yaw_ImplicitCast != nullptr)
		*CallFunc_MakeRotator_Yaw_ImplicitCast = Parms.CallFunc_MakeRotator_Yaw_ImplicitCast;

	return Parms.ReturnValue;

}

}


