#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x1290 - 0x1238)
// BlueprintGeneratedClass HarnessStructureBase.HarnessStructureBase_C
class AHarnessStructureBase_C : public APrimalStructure
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1238(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UBoxComponent*                         BuildingBounds;                                    // 0x1240(0x8)(BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UAudioComponent*                       HarnessSounds;                                     // 0x1248(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x1250(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	double                                       OverrideAttachedTurretMaxYawRange;                 // 0x1258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         IsCreatureMoving;                                  // 0x1260(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         IsCreatureRunning;                                 // 0x1261(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25BF[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundCue*                             MovingSound;                                       // 0x1268(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class USoundCue*                             RunningSound;                                      // 0x1270(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class USoundCue*                             LandingSound;                                      // 0x1278(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       ConsumablesTransferInterval;                       // 0x1280(0x8)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       ConsumablesTransferRange;                          // 0x1288(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AHarnessStructureBase_C* GetDefaultObj();

	bool GetAttachedTurretYawLimitsOverride(const struct FVector& ReturnValue, bool K2Node_DynamicCast_bSuccess, double CallFunc_SelectFloat_ReturnValue, struct FVector* CallFunc_MakeVector_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, double* CallFunc_MakeVector_Y_ImplicitCast, double* CallFunc_MakeVector_X_ImplicitCast);
	enum class EMovementMode MovementModeChanged();
	void SpeedChanged();
	void ReceiveBeginPlay();
	void Multi_PlayLandingSound();
	void MySpeedChanged(bool bIsMoving, bool* bIsRunning);
	void ClientSpeedUpdate();
	float ReceiveTick();
	void TryTransferConsumable();
	void BPPostLoadedFromSaveGame();
	float ExecuteUbergraph_HarnessStructureBase(int32* EntryPoint, bool CallFunc_HasAuthority_ReturnValue, int32* Temp_int_Array_Index_Variable, int32* Temp_int_Loop_Counter_Variable, int32* Temp_int_Loop_Counter_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, int32* Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool Temp_bool_Variable, class USoundBase* K2Node_Select_Default, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_1, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool K2Node_DynamicCast_bSuccess, struct FPrimalSaddleStructure* CallFunc_Array_Get_Item, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, class APrimalStructure** CallFunc_Array_Get_Item_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_K2_SetTimer_Time_ImplicitCast);
};

}


