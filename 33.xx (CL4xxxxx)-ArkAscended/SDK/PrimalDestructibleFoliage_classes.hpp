#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x328 (0x7F8 - 0x4D0)
// BlueprintGeneratedClass PrimalDestructibleFoliage.PrimalDestructibleFoliage_C
class APrimalDestructibleFoliage_C : public APrimalDestructibleActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class FString                                Damage_Amount;                                     // 0x4D8(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                Break_Damage_Propagation_Factor;                   // 0x4E8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               VelocityVector;                                    // 0x4F8(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<float>                                Damage_Threshold;                                  // 0x510(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        ClusterIndex;                                      // 0x520(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        Item_Index;                                        // 0x524(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          Text_Color;                                        // 0x528(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        Number_Of_Pieces_in_Geo_Collection;                // 0x538(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5387[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               AngularVelocityVector;                             // 0x540(0x18)(ConstParm, BlueprintVisible, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        DebugTextDuration;                                 // 0x558(0x4)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5388[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryCollection*                   Rest_Collection_In;                                // 0x560(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EObjectStateTypeEnum              SetStateType;                                      // 0x568(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EObjectStateTypeEnum              StateType;                                         // 0x569(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5389[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       Target;                                            // 0x570(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	bool                                         Enable_Clustering;                                 // 0x578(0x1)(ConstParm, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Crumbling_Event_Includes_Children;                 // 0x579(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_538A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryCollectionComponent*          GC_Test;                                           // 0x580(0x8)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       BreakLevel__0Minus1_;                              // 0x588(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         EnableTextDebug;                                   // 0x590(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_538B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRandomStream                         Stream;                                            // 0x594(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm)
	int32                                        Initial_Seed;                                      // 0x59C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       DynamicActivationRadius;                           // 0x5A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FUDS_and_UDW_State                    State;                                             // 0x5A8(0x178)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	bool                                         EnableStateChange;                                 // 0x720(0x1)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_538C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        HitDirectionVelocityMultiplier_min;                // 0x724(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        HitDirectionVelocityMultiplier_max;                // 0x728(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        AngularVelocityMultiplier_Min;                     // 0x72C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        AngularVelocityMultiplier_Max;                     // 0x730(0x4)(ConstParm, BlueprintVisible, Net, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_538E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       BreakLevelPercent_Min;                             // 0x738(0x8)(ExportObject, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       TimeToForceStartRemoval;                           // 0x740(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        Damage;                                            // 0x748(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        TotalHealth;                                       // 0x74C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               HitDirection;                                      // 0x750(0x18)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<int32>                                Level_0_Indices;                                   // 0x768(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Level_1_Indices;                                   // 0x778(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Level_2_Indices;                                   // 0x788(0x10)(ExportObject, Net, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               NewVar;                                            // 0x798(0x18)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       MaxOnBreakAngularVelocity;                         // 0x7B0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        Mass_multiplier;                                   // 0x7B8(0x4)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5392[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Approximate_Hit_Location;                          // 0x7C0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       Minimum_damage_threshold_needed_to_apply_velocity; // 0x7D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       Minimum_Damage_for_max_size_of_impulse;            // 0x7E0(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       Hit_Impulse_Strength;                              // 0x7E8(0x8)(Net, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       Percentage_impulse_strength_based_on_damage;       // 0x7F0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class APrimalDestructibleFoliage_C* GetDefaultObj();

	struct FVector InitializeVariablesFromGameplayData(int32* CallFunc_BPGetMaxIndex_ReturnValue, struct FVector* CallFunc_GetActorScale3D_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, struct FVector* CallFunc_ProjectVectorOnToPlane_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_5, double CallFunc_MapRangeClamped_Value_ImplicitCast, double* CallFunc_MapRangeClamped_OutRangeB_ImplicitCast, double* CallFunc_MapRangeClamped_OutRangeA_ImplicitCast);
	int32 BreakClusterFromRandomClusterIndexArray(TArray<int32>* ItemIndexArrayOfCluster, const struct FLinearColor& DebugTextColor, double BreakLevelPercent__0Minus1_, int32* Seed, int32* IndexNumber, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32* Temp_int_Variable, struct FDateTime* CallFunc_Now_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, int32* CallFunc_GetMillisecond_ReturnValue, int32* Temp_int_Variable_1, struct FRandomStream* CallFunc_MakeRandomStream_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	int32 BreakClusterFromClusterIndexArray(TArray<int32>* ItemIndexArrayOfCluster, const struct FLinearColor& DebugTextColor, int32* Seed, int32* IndexNumber, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* Temp_int_Variable, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	int32 Group_Cluster_Index_by_Level(const struct FLinearColor& DebugTextColor, int32* IndexNumber, int32* CallFunc_GetInitialLevel_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, int32* Temp_int_Variable, int32* Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* Temp_int_Variable_2, int32* Temp_int_Variable_3);
	int32 GetRangeOfLevelsFromClusterIndexes(int32 EndItemIndexOfCluster, const struct FLinearColor& DebugTextColor, int32* IndexNumber, int32* CallFunc_GetInitialLevel_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32* Temp_int_Variable_2, int32* Temp_int_Variable_3, bool CallFunc_LessEqual_IntInt_ReturnValue);
	int32 GetDamageThresholdInfo(const struct FLinearColor& DebugTextColor, int32 Damage_Threshold_Array_Length, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable);
	class UGeometryCollectionComponent* BreakAllActiveClusters(const struct FLinearColor& DebugTextColor);
	struct FVector BreakClusterFromClusterIndex(int32* ItemIndexOfCluster, const struct FLinearColor& DebugTextColor, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	int32 GetLevelFromClusterIndex(int32* ItemIndexOfCluster, const struct FLinearColor& DebugTextColor, int32* CallFunc_GetInitialLevel_ReturnValue);
	void Break();
	void BreakSecondLayer();
	float BPStartDestruction();
	void ReceiveBeginPlay();
	void OnBreak(struct FChaosBreakEvent* BreakEvent);
	float StaticBPPreDestructionHandleAttachedComponentClass();
	float ExecuteUbergraph_PrimalDestructibleFoliage(int32* EntryPoint, class UBP_PrimalWindSourceComponent_GeoCollection_Foliage_C* CallFunc_AddComponentByClass_ReturnValue, struct FChaosBreakEvent* K2Node_CustomEvent_BreakEvent, class UGeometryCollection** K2Node_Event_destructionAsset, struct FVector* K2Node_Event_HitDirection_1, float* K2Node_Event_Damage_1, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, TArray<int32>* CallFunc_Group_Cluster_Index_by_Level_Level0, TArray<int32>* CallFunc_Group_Cluster_Index_by_Level_Level1, TArray<int32>* CallFunc_Group_Cluster_Index_by_Level_level2, float* CallFunc_GetMass_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, class UClass** K2Node_Event_AttachedComponentClass, class UInstancedStaticMeshComponent* K2Node_Event_ForMeshComp, int32* K2Node_Event_InstanceIndex, struct FVector* K2Node_Event_HitDirection, float* K2Node_Event_Damage, class UClass** K2Node_ClassDynamicCast_AsPrimal_Harvesting_Component, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float CallFunc_SetAllMassScale_InMassScale_ImplicitCast, float CallFunc_AddRadialImpulse_Strength_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
};

}


