#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1838 (0x1B80 - 0x348)
// AnimBlueprintGeneratedClass SK_Male_Hair_Default_long_AnimBP.SK_Male_Hair_Default_long_AnimBP_C
class USK_Male_Hair_Default_long_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5D59[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(ConstParm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5D5A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x390(0x9E0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xD70(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0xD90(0x1D8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xF68(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_11;                         // 0xF88(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_10;                         // 0x1078(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_9;                          // 0x1168(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_8;                          // 0x1258(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_7;                          // 0x1348(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_6;                          // 0x1438(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_5;                          // 0x1528(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_4;                          // 0x1618(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_3;                          // 0x1708(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_2;                          // 0x17F8(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_1;                          // 0x18E8(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0x19D8(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               K2Node_PropertyAccess_3;                           // 0x1AC8(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         K2Node_PropertyAccess_2;                           // 0x1AE0(0x1)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	enum class EMovementMode                     K2Node_PropertyAccess_1;                           // 0x1AE1(0x1)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_PropertyAccess;                             // 0x1AE2(0x1)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5D5B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       DefaultGravity;                                    // 0x1AE8(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Override_World_Gravity_Z;                          // 0x1AF0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Swimming;                                          // 0x1AF8(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5D5C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       UnderwaterGravity;                                 // 0x1B00(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Val;                                               // 0x1B08(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               UnderwaterNoise;                                   // 0x1B10(0x18)(BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               ExternalForce;                                     // 0x1B28(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       GameTimeSeconds;                                   // 0x1B40(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Wind_Frequency;                                    // 0x1B48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialParameterCollection*          WeatherRef;                                        // 0x1B50(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        GlobalWindIntensity;                               // 0x1B58(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D5D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GlobalWindDirection;                               // 0x1B60(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     As_Shooter_Character;                              // 0x1B78(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USK_Male_Hair_Default_long_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& AnimGraph);
	float NoiseGen(double CallFunc_Multiply_DoubleFloat_ReturnValue, struct FVector* CallFunc_K2_MakePerlinNoiseVectorAndRemap_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float* CallFunc_K2_MakePerlinNoiseVectorAndRemap_X_ImplicitCast, float* CallFunc_K2_MakePerlinNoiseVectorAndRemap_Y_ImplicitCast, float CallFunc_K2_MakePerlinNoiseVectorAndRemap_Z_ImplicitCast);
	double BlueprintThreadSafeUpdateAnimation(struct FVector* CallFunc_CalculateWind_Wind, double* CallFunc_CalculateWind_GlobalWindIntensity_ImplicitCast);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	class FName ExecuteUbergraph_SK_Male_Hair_Default_long_AnimBP(int32* EntryPoint, float* K2Node_Event_DeltaTimeX, struct FLinearColor* CallFunc_GetVectorParameterValue_ReturnValue, float* CallFunc_GetScalarParameterValue_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast);
};

}


