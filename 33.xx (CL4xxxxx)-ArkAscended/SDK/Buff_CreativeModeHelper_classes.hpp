#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7F (0xBF0 - 0xB71)
// BlueprintGeneratedClass Buff_CreativeModeHelper.Buff_CreativeModeHelper_C
class ABuff_CreativeModeHelper_C : public ABuff_Base_OnlyRelevantToOwner_C
{
public:
	uint8                                        Pad_56B6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB78(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       DebugReplicationRadius;                            // 0xB80(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       DebugServerTraceSpacing;                           // 0xB88(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         DebugReplication;                                  // 0xB90(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsFlying;                                          // 0xB91(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_56B7[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastModeChangeTime;                                // 0xB98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       JumpPressTime;                                     // 0xBA0(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       OrigMaxFlySpeed;                                   // 0xBA8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       OrigBrakeDecelFlying;                              // 0xBB0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                AdminBlinkWeaponItem;                              // 0xBB8(0x8)(BlueprintVisible, ExportObject, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	TSoftClassPtr<class AShooterWeapon>          AdminBlinkWeaponWeap;                              // 0xBC0(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_CreativeModeHelper_C* GetDefaultObj();

	bool BPCheckPreventInput(enum class EPrimalCharacterInputType* InputType);
	class FString BPDrawBuffStatusHUD(float XPos, float YPos, float ScaleMult, double* CallFunc_Add_DoubleDouble_ReturnValue, bool* CallFunc_IsEditor_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_DrawText_ScreenY_ImplicitCast);
	int32 BuffTickServer(const TArray<struct FVector>& HitEnds, const TArray<struct FVector>& HitStarts, const TArray<struct FHitResult>& Hits, class APrimalCharacter** Player, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class AActor*>* Temp_object_Variable, int32* Temp_int_Variable_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, TArray<enum class EObjectTypeQuery>* K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>* CallFunc_SphereOverlapActors_OutActors, bool* CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, TArray<class AActor*>* CallFunc_ServerOctreeOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float* CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess_2, bool* CallFunc_IsPlayerAllowedToCheat_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue, struct FHitResult* CallFunc_VTraceSingleBP_OutHit, bool* CallFunc_VTraceSingleBP_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float* CallFunc_MulticastDrawDebugSphere_Duration_ImplicitCast, float* CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast, float* CallFunc_ServerOctreeOverlapActors_Radius_ImplicitCast, float* CallFunc_MulticastDrawDebugSphere_Radius_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast);
	bool IsNotRidingDino(class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	bool ExecConsoleCommand();
	float BPDeactivated(class AActor** ForInstigator, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_BPIncrementItemTemplateQuantity_ReturnValue, float* K2Node_VariableSet_BrakingDecelerationFlying_ImplicitCast);
	double BPActivated(class AActor** ForInstigator, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class ACharacter** K2Node_DynamicCast_AsCharacter, bool* K2Node_DynamicCast_bSuccess_1, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_BPIncrementItemTemplateQuantity_ReturnValue, int32 CallFunc_GetItemTemplateQuantity_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast, float* K2Node_VariableSet_BrakingDecelerationFlying_ImplicitCast);
	class APlayerController* BPSetupForInstigator(class AActor** ForInstigator, class APawn** K2Node_DynamicCast_AsPawn, bool* K2Node_DynamicCast_bSuccess);
	void InpActEvt_Jump_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Run_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Run_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ServerSetFlight(bool IsFlying);
	double ServerSetFlySpeed();
	double SetFlySpeed();
	class APrimalStructure* NetServerDestroyStructure();
	void ClientUpdateFlightStatus(bool IsFlying);
	void MultiReplicationDebugData(const TArray<struct FHitResult>& Hits, const TArray<struct FVector>& HitStarts, const TArray<struct FVector>& HitEnds, const TArray<struct FTransform>& Chars, struct FVector* Player);
	float BuffTickClient();
	void ServerRequestReplicationDebugging(bool* Enabled);
	float ExecuteUbergraph_Buff_CreativeModeHelper(int32* EntryPoint, TArray<class AActor*>* Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_CustomEvent_IsFlying_1, bool* CallFunc_IsPlayerAllowedToCheat_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, struct FKey* K2Node_InputActionEvent_Key_1, double* K2Node_CustomEvent_NewSpeed, double CallFunc_FClamp_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_2, double* K2Node_CustomEvent_New_Speed, struct FKey* K2Node_InputActionEvent_Key, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsClient_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class APrimalStructure** K2Node_CustomEvent_StructureToDestroy, int32* Temp_int_Variable, struct FKey* K2Node_InputActionEvent_Key_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool* K2Node_DynamicCast_bSuccess_4, bool* CallFunc_IsNotRidingDino_NotRidingDino, bool* CallFunc_IsNotRidingDino_NotRidingDino_1, bool* K2Node_DynamicCast_bSuccess_5, bool* K2Node_CustomEvent_IsFlying, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_2, bool* K2Node_DynamicCast_bSuccess_6, TArray<struct FHitResult>* K2Node_CustomEvent_Hits, TArray<struct FVector>* K2Node_CustomEvent_HitStarts, TArray<struct FVector>* K2Node_CustomEvent_HitEnds, TArray<struct FTransform>* K2Node_CustomEvent_Chars, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Array_Get_Item_1, const struct FHitResult& CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, TArray<enum class EObjectTypeQuery>* K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_DeltaTime, const struct FTransform& CallFunc_Array_Get_Item_3, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FKey* K2Node_InputActionEvent_Key_3, bool* K2Node_CustomEvent_Enabled, TArray<class AActor*>* CallFunc_SphereOverlapActors_OutActors, bool* CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item_4, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_3, bool* K2Node_DynamicCast_bSuccess_7, struct FKey* K2Node_InputActionEvent_Key_4, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_2, bool* K2Node_DynamicCast_bSuccess_8, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_3, bool* K2Node_DynamicCast_bSuccess_9, bool* K2Node_DynamicCast_bSuccess_10, struct FKey* K2Node_InputActionEvent_Key_5, bool* K2Node_DynamicCast_bSuccess_11, float CallFunc_DrawDebugLineTraceHitResult_Duration_ImplicitCast, float* CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast);
};

}


