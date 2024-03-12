#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC (0x35B4 - 0x34F8)
// BlueprintGeneratedClass Dino_Character_BP_Pack.Dino_Character_BP_Pack_C
class ADino_Character_BP_Pack_C : public ADino_Character_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x34F8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	TArray<class AActor*>                        DinoPack;                                          // 0x3500(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                ClosestPackDino;                                   // 0x3510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       MaxPackWanderDistance;                             // 0x3518(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       PackRadius;                                        // 0x3520(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       LastUpdatedPackTime;                               // 0x3528(0x8)(Edit, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        PackSize;                                          // 0x3530(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsPackLeader;                                     // 0x3534(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCopycatRoar;                                      // 0x3535(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUsePackRoar;                                      // 0x3536(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5441[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        RoarAttackIndex;                                   // 0x3538(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        PackOctreeTypeBitMask;                             // 0x353C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       TimeAfterRoarToCausePackRoar;                      // 0x3540(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       UpdatePackDelay_PostUnstasis;                      // 0x3548(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       UpdatePackDelay_PostUnstasis_RandRange;            // 0x3550(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       UpdatePackDelay_PostBeginPlay;                     // 0x3558(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       UpdatePackDelay_PostBeginPlay_RandRange;           // 0x3560(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                DinoPackLeaderBuffClass;                           // 0x3568(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class ADino_Character_BP_Pack_C*             MyPackLeader;                                      // 0x3570(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDebugPackDino;                                    // 0x3578(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5442[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TimePackJoiningWasPutOnCoolDown;                   // 0x3580(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         WanderCloseToLeader;                               // 0x3588(0x1)(Edit, ConstParm, BlueprintVisible, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5443[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TimeToPreventJoiningAPack;                         // 0x3590(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        RandomID;                                          // 0x3598(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         DontJoinNewPackIfHasAffinity;                      // 0x359C(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         DontAllowLeaderWithAffinity;                       // 0x359D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5444[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastTimeGatheredPack;                              // 0x35A0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        MinPackSize;                                       // 0x35A8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        ReplicatedPackSize;                                // 0x35AC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Counter;                                           // 0x35B0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ADino_Character_BP_Pack_C* GetDefaultObj();

	void PackMemberDied(class ADino_Character_BP_Pack_C* DeadDino);
	bool BP_OnSetDeath(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess);
	void Get_RadiusToJoinPack(bool belongsToOldPack, double FirstTimeRadius);
	double CanDinoBeAddedToPack(TArray<class AActor*>* OldPack, bool CanBeAdded, bool FoundInOldPack, bool CanAddDino, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, double* CallFunc_Get_RadiusToJoinPack_firstTimeRadius, bool* CallFunc_IsValidClassForPack_isValid, bool* CallFunc_Can_Join_Pack_Can_Join, bool* CallFunc_IsDead_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable);
	int32 Add_Dino_to_Pack();
	bool IsValidClassForPack(class AActor* JoiningActor);
	double BPTimerServer(double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float* CallFunc_StaticGetTimeSince_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	double Put_Join_Pack_On_Cooldown(double DurationOfPackPrevention);
	bool Can_Join_Pack(bool Can_Join, bool* RetVal, float* CallFunc_StaticGetTimeSince_ReturnValue, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool BPShouldForceFlee(bool CallFunc_LessEqual_IntInt_ReturnValue);
	bool ClearPack(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess);
	bool InitPackDino(bool IsBeginPlay, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1);
	bool PackRoar(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_DoAttack_ReturnValue);
	bool UpdatePack(bool* CallFunc_IsPackLeader_bIsLeader, double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	bool BPDoAttack(bool* CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	bool BlueprintCanRiderAttack();
	bool BlueprintCanAttack(bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	double IsPackLeader(bool bIsLeader, int32* MyArrayIndex, int32* MyLevel, bool* RetVal, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32* CallFunc_GetCharacterLevel_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_GetCharacterLevel_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_GetCharacterLevel_ReturnValue_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	void BPUnstasis();
	double GatherPack(bool FoundInOldPack, TArray<class AActor*>* OldPack, const TArray<class AActor*>& DinoArrayCopy, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_1, int32* Temp_int_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class AActor* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Can_Join_Pack_Can_Join, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_IsPackLeader_bIsLeader, float CallFunc_Conv_DoubleToFloat_ReturnValue, float CallFunc_Conv_DoubleToFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor** CallFunc_GetClosestActorArray_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_Greater_IntInt_ReturnValue, TArray<class AActor*>* CallFunc_ServerOctreeOverlapActorsBitMask_ReturnValue, class AActor* CallFunc_Array_Get_Item_2, bool* K2Node_DynamicCast_bSuccess_2, bool* CallFunc_Can_Join_Pack_Can_Join_1, bool* CallFunc_CanDinoBeAddedToPack_canBeAdded, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, float* CallFunc_ServerOctreeOverlapActorsBitMask_Radius_ImplicitCast);
	struct FVector OverrideRandomWanderLocation(struct FVector* InVec, struct FVector* OutVec, bool* CallFunc_Greater_IntInt_ReturnValue, class UObject* CallFunc_SelectObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool* K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Dino_Character_BP_Pack(int32* EntryPoint, int32* CallFunc_RandomInteger_ReturnValue);
};

}


