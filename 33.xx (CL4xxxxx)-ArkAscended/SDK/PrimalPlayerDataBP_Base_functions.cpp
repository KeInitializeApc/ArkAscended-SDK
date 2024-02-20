#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C
// (None)

class UClass* UPrimalPlayerDataBP_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalPlayerDataBP_Base_C");

	return Clss;
}


// PrimalPlayerDataBP_Base_C PrimalPlayerDataBP_Base.Default__PrimalPlayerDataBP_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalPlayerDataBP_Base_C* UPrimalPlayerDataBP_Base_C::GetDefaultObj()
{
	static class UPrimalPlayerDataBP_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalPlayerDataBP_Base_C*>(UPrimalPlayerDataBP_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.EndActivityOnBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Boss                                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterPlayerController*    SPC                                                              (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UPrimalPlayerDataBP_Base_C::EndActivityOnBoss(class FName Boss, class AShooterPlayerController* SPC, bool K2Node_SwitchName_CmpSuccess, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "EndActivityOnBoss");

	Params::UPrimalPlayerDataBP_Base_C_EndActivityOnBoss_Params Parms{};

	Parms.Boss = Boss;
	Parms.SPC = SPC;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetChibiLevels
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLevels                                                        (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalPlayerDataBP_Base_C::SetChibiLevels(int32 NewLevels, class APawn** CallFunc_K2_GetPawn_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "SetChibiLevels");

	Params::UPrimalPlayerDataBP_Base_C_SetChibiLevels_Params Parms{};

	Parms.NewLevels = NewLevels;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_GetPawn_ReturnValue != nullptr)
		*CallFunc_K2_GetPawn_ReturnValue = Parms.CallFunc_K2_GetPawn_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.HasGeneralizedAchievementTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tag                                                              (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Ret_val                                                          (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalPlayerDataBP_Base_C::HasGeneralizedAchievementTag(bool ReturnValue, bool Ret_val, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "HasGeneralizedAchievementTag");

	Params::UPrimalPlayerDataBP_Base_C_HasGeneralizedAchievementTag_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Ret_val = Ret_val;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GrantGeneralizedAchievementTag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ObtainedAchievementTag                                           (ConstParm, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalPlayerDataBP_Base_C::GrantGeneralizedAchievementTag(class FName ObtainedAchievementTag, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "GrantGeneralizedAchievementTag");

	Params::UPrimalPlayerDataBP_Base_C_GrantGeneralizedAchievementTag_Params Parms{};

	Parms.ObtainedAchievementTag = ObtainedAchievementTag;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	if (CallFunc_K2_GetPawn_ReturnValue != nullptr)
		*CallFunc_K2_GetPawn_ReturnValue = Parms.CallFunc_K2_GetPawn_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPForceDefeatedBoss
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DifficultyIndex                                                  (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        BossName                                                         (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// struct FBossEngramsSoftReferenceMappingCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
// struct FEngramsSetSoftReferenceMappingCallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      CallFunc_BPLoadClass_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)

bool UPrimalPlayerDataBP_Base_C::BPForceDefeatedBoss(int32* DifficultyIndex, class FName BossName, class AShooterPlayerController** PlayerController, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, int32 CallFunc_Array_Find_ReturnValue, class UClass* CallFunc_BPLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "BPForceDefeatedBoss");

	Params::UPrimalPlayerDataBP_Base_C_BPForceDefeatedBoss_Params Parms{};

	Parms.BossName = BossName;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_BPLoadClass_ReturnValue = CallFunc_BPLoadClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (DifficultyIndex != nullptr)
		*DifficultyIndex = Parms.DifficultyIndex;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	return Parms.ReturnValue;

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewHexagonCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UPrimalPlayerDataBP_Base_C::SetPlayerHexagonCount(int32 NewHexagonCount, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "SetPlayerHexagonCount");

	Params::UPrimalPlayerDataBP_Base_C_SetPlayerHexagonCount_Params Parms{};

	Parms.NewHexagonCount = NewHexagonCount;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UPrimalPlayerDataBP_Base_C::GetPlayerHexagonCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "GetPlayerHexagonCount");

	Params::UPrimalPlayerDataBP_Base_C_GetPlayerHexagonCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPCreatedNewPlayerData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalPlayerDataBP_Base_C::BPCreatedNewPlayerData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "BPCreatedNewPlayerData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.DefeatedBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*        BossChar                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              DifficultyIndex                                                  (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        TagOverride                                                      (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Find_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

double UPrimalPlayerDataBP_Base_C::DefeatedBoss(class APrimalDinoCharacter* BossChar, int32* DifficultyIndex, class FName TagOverride, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "DefeatedBoss");

	Params::UPrimalPlayerDataBP_Base_C_DefeatedBoss_Params Parms{};

	Parms.BossChar = BossChar;
	Parms.TagOverride = TagOverride;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DifficultyIndex != nullptr)
		*DifficultyIndex = Parms.DifficultyIndex;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}

}


