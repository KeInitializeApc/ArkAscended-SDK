#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D0 (0x790 - 0x4C0)
// BlueprintGeneratedClass NinjaLive.NinjaLive_C
class ANinjaLive_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UNinjaLiveComponent_C*                 NinjaLiveComponent;                                // 0x4C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, DuplicateTransient)
	class UBoxComponent*                         InteractionVolume;                                 // 0x4D0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBoxComponent*                         ActivationVolume;                                  // 0x4D8(0x8)(Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UMaterialBillboardComponent*           EditorIcon;                                        // 0x4E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  TraceMesh;                                         // 0x4E8(0x8)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       Root;                                              // 0x4F0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	class UTextureRenderTarget2D*                RT_DensityPreview;                                 // 0x4F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstance*                     InactiveGrayMaterial;                              // 0x500(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         DisableBlueprint;                                  // 0x508(0x1)(BlueprintVisible, ExportObject, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_592B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TimeCounterForBrush;                               // 0x510(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       DeltaSeconds;                                      // 0x518(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         MousePressed;                                      // 0x520(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShowTraceMeshInEditor;                             // 0x521(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_592C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               TraceMeshSize;                                     // 0x528(0x18)(ExportObject, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EUserInput_Enum                   UserInputBasedInteraction;                         // 0x540(0x1)(Edit, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         OverlapBasedInteraction;                           // 0x541(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_592F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class ANinjaLive_C*>                  NinjaLIVECollisionExclude;                         // 0x548(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       Time;                                              // 0x558(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         SimActivatedByPawnProximity;                       // 0x560(0x1)(Edit, ConstParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShowActivationVolumeInEditor;                      // 0x561(0x1)(BlueprintVisible, ExportObject, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5931[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ActivationVolumeSize;                              // 0x568(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       ActivatorProximityCheckFrequency;                  // 0x580(0x8)(ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class ECollisionChannel                 ActivatorType;                                     // 0x588(0x1)(OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5932[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                Activator;                                         // 0x590(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         PawnInsideActivationBounds;                        // 0x598(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         InitDone;                                          // 0x599(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         BeginPlaySupressed;                                // 0x59A(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         UseTraceMeshAsInteractionVolume;                   // 0x59B(0x1)(ConstParm, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShowInteractionVolumeInEditor;                     // 0x59C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5933[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InteractionVolumeSize;                             // 0x5A0(0x18)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<bool>                                 MultipleTouchLookup;                               // 0x5B8(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       TickRateCustom;                                    // 0x5C8(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   InteractionVolumeTemplate;                         // 0x5D0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  TrackActorPrimitiveComponentsWithTag;              // 0x5D8(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  TrackActorSkeletalMeshComponentsWithTag;           // 0x5E0(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<enum class EObjectTypeQuery>          OverlapFilterInclusiveObjType;                     // 0x5E8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class FName>                          OverlapFilterInclusiveBoneNameExact;               // 0x5F8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        OverlapFilterInclusiveBoneNamePartial;             // 0x608(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        ExcludeSpecificActorsFromOverlap;                  // 0x618(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         AutoExcludeLargeOverlappingObjects;                // 0x628(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5936[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<enum class ECollisionChannel, enum class EObjectTypeQuery> OverlapFilterInclusiveCollisionType;               // 0x630(0x50)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EInactiveBehaviour_Enum           TraceMeshInactiveBehaviour;                        // 0x680(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ActivationEventsDebugPrint;                        // 0x681(0x1)(Edit, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         SimContainerCapacityWarning;                       // 0x682(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         SaveDebugTextToLog;                                // 0x683(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5939[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       DebugTextLifeTimeLength;                           // 0x688(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   OverlappingSkeletalMesh;                           // 0x690(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       BrushStrengthTemp2;                                // 0x698(0x8)(ConstParm, ExportObject, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       InputFeedbackTemp1;                                // 0x6A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         DisableAndNotTickBlock;                            // 0x6A8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_593A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimitiveComponent*>           OverlappingComponents;                             // 0x6B0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<class AActor*>                        OverlappingActors;                                 // 0x6C0(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TMap<int32, class UPrimitiveComponent*>      SkeletalMeshMinusTempArrayMinusPairs;              // 0x6D0(0x50)(ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        OverlappingActorsInitial;                          // 0x720(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OwnerRePlayEvent;                                  // 0x730(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         OverrideComponentVariables;                        // 0x740(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         AutoConnectToMemoryPoolMinusIFMinusFound;          // 0x741(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_593B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        OutputFilterMaterialIndex;                         // 0x744(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShowLODdebugMessagesOnScreen;                      // 0x748(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_593C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       GlobalBrushScale;                                  // 0x750(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         LOD1MinusReduceIterations;                         // 0x758(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         LOD2MinusReduceSamplingFPS;                        // 0x759(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         LOD3MinusReduceCollisionAmount;                    // 0x75A(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_593D[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MinSamplingFPS;                                    // 0x75C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       LODMinusFarBound;                                  // 0x760(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       LODMinusNearBound;                                 // 0x768(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        DownscaleCollisionPainterResolution;               // 0x770(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        DownscalePressureResolution;                       // 0x774(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         SingleTargetMode;                                  // 0x778(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         InitialActorsProcessed;                            // 0x779(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         SKMeshTagged;                                      // 0x77A(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_593E[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          OverlapFilterInclusiveBoneNameExactTemp;           // 0x780(0x10)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ANinjaLive_C* GetDefaultObj();

	bool BPAllowActorSpawn(class UWorld** ForWorld, struct FRotator* AtRotation, class AActor** ForOwner, class APawn** ForInstigator, class UWorld* CallFunc_GetPrimaryWorld_ReturnValue, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* K2Node_DynamicCast_bSuccess);
	void ResetTempArrays();
	int32 UserConstructionScript(TArray<class UPrimitiveComponent*>* K2Node_MakeArray_Array, class UPrimitiveComponent* CallFunc_Array_Get_Item);
	void Replay();
	double LiveActivation(class FName ParamName);
	void LiveFluidParams(double BrushSize);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	struct FHitResult BeginOverlapComponent();
	int32 EndOverlapComponent();
	class AActor* ReceiveActorEndOverlap();
	class AActor* ReceiveActorBeginOverlap();
	float ExecuteUbergraph_NinjaLive(int32* EntryPoint, bool Temp_bool_Variable, const TArray<class UPrimitiveComponent*>& CallFunc_ComponentOverlapComponents_OutComponents, bool* CallFunc_ComponentOverlapComponents_ReturnValue, bool Temp_bool_Variable_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable_2, bool* CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_Variable_4, bool K2Node_SwitchEnum_CmpSuccess, double* K2Node_Event_FadeTimeOfBrush, float K2Node_Event_DeltaSeconds, int32* Temp_int_Variable, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32* Temp_int_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_4, enum class EObjectTypeQuery CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, int32* Temp_int_Variable_2, int32 Temp_int_Loop_Counter_Variable_5, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool* CallFunc_MakeLiteralBool_ReturnValue, class AActor** K2Node_CustomEvent_OtherActor_1, class UPrimitiveComponent** K2Node_CustomEvent_OtherComp_1, int32 K2Node_CustomEvent_OtherBodyIndex_1, int32* Temp_int_Variable_3, int32* Temp_int_Variable_4, const TArray<class FName>& K2Node_Select_Default, int32 Temp_int_Array_Index_Variable_5, class UPrimitiveComponent* CallFunc_Array_Get_Item_3, class AActor* CallFunc_GetOwner_ReturnValue, enum class ECollisionChannel* CallFunc_GetCollisionObjectType_ReturnValue, enum class ECollisionChannel* CallFunc_GetCollisionObjectType_ReturnValue_1, enum class ECollisionResponse CallFunc_GetCollisionResponseToChannel_ReturnValue, class AActor* K2Node_Select_Default_1, int32 Temp_int_Loop_Counter_Variable_6, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, const TArray<class USkeletalMeshComponent*>& K2Node_Select_Default_2, class USkeletalMeshComponent* CallFunc_Array_Get_Item_4, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool* CallFunc_Greater_IntInt_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class UPrimitiveComponent*>* K2Node_MakeArray_Array, bool* CallFunc_StartsWith_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item_5, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_6, bool Temp_bool_Variable_5, bool CallFunc_Less_DoubleDouble_ReturnValue, class AActor* K2Node_Select_Default_3, const TArray<class FName>& K2Node_Select_Default_4, bool CallFunc_Array_Get_Item_6, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_7, class AActor** K2Node_CustomEvent_OtherActor, class UPrimitiveComponent** K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, enum class ECollisionChannel Temp_byte_Variable, int32 Temp_int_Array_Index_Variable_7, class UPrimitiveComponent* CallFunc_Array_Get_Item_7, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2);
	void OwnerRePlayEvent__DelegateSignature();
};

}


