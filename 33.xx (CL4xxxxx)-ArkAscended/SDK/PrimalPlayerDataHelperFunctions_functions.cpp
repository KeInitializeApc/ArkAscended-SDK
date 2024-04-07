#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C
// (None)

class UClass* UPrimalPlayerDataHelperFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalPlayerDataHelperFunctions_C");

	return Clss;
}


// PrimalPlayerDataHelperFunctions_C PrimalPlayerDataHelperFunctions.Default__PrimalPlayerDataHelperFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalPlayerDataHelperFunctions_C* UPrimalPlayerDataHelperFunctions_C::GetDefaultObj()
{
	static class UPrimalPlayerDataHelperFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalPlayerDataHelperFunctions_C*>(UPrimalPlayerDataHelperFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.Apply To Player Pawn Character
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerState*         For_Player_State                                                 (Edit, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           New_Player_Character                                             (ConstParm, ExportObject, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<double>                     Ascension_Data                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              HexagonCount                                                     (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              ChibiLevelUpsCount                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bUnlockedAllExplorerNotes                                        (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FName>                GeneralizedUnlockedAchievementTags                               (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (ConstParm, BlueprintVisible, Net, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// double                             CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// double                             CallFunc_Array_Get_Item_4                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_FFloor_ReturnValue_3                                    (ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_FFloor_ReturnValue_4                                    (ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Array_Get_Item_5                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_FFloor_ReturnValue_5                                    (ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)

int32 UPrimalPlayerDataHelperFunctions_C::Apply_To_Player_Pawn_Character(TArray<double>* Ascension_Data, int32* HexagonCount, int32* ChibiLevelUpsCount, const TArray<class FName>& GeneralizedUnlockedAchievementTags, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool* K2Node_DynamicCast_bSuccess, double CallFunc_Array_Get_Item, double CallFunc_Array_Get_Item_1, double CallFunc_Array_Get_Item_2, double CallFunc_Array_Get_Item_3, double CallFunc_Array_Get_Item_4, double CallFunc_Array_Get_Item_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataHelperFunctions_C", "Apply To Player Pawn Character");

	Params::UPrimalPlayerDataHelperFunctions_C_Apply_To_Player_Pawn_Character_Params Parms{};

	Parms.GeneralizedUnlockedAchievementTags = GeneralizedUnlockedAchievementTags;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;

	UObject::ProcessEvent(Func, &Parms);

	if (Ascension_Data != nullptr)
		*Ascension_Data = std::move(Parms.Ascension_Data);

	if (HexagonCount != nullptr)
		*HexagonCount = Parms.HexagonCount;

	if (ChibiLevelUpsCount != nullptr)
		*ChibiLevelUpsCount = Parms.ChibiLevelUpsCount;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


