#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4D0 - 0x4C8)
// Class FieldSystemEngine.FieldSystemActor
class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                 FieldSystemComponent;                              // 0x4C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class AFieldSystemActor* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class FieldSystemEngine.FieldSystem
class UFieldSystem : public UObject
{
public:
	uint8                                        Pad_2766[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystem* GetDefaultObj();

};

// 0xD8 (0x770 - 0x698)
// Class FieldSystemEngine.FieldSystemComponent
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	class UFieldSystem*                          FieldSystem;                                       // 0x698(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	bool                                         bIsWorldField;                                     // 0x6A0(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsChaosField;                                     // 0x6A1(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2785[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class AChaosSolverActor>> SupportedSolvers;                                  // 0x6A8(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFieldObjectCommands                  ConstructionCommands;                              // 0x6B8(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFieldObjectCommands                  BufferCommands;                                    // 0x6E8(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2787[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemComponent* GetDefaultObj();

	void ResetFieldSystem();
	void RemovePersistentFields();
	float ApplyUniformVectorFalloffForce(bool* Enabled, const struct FVector& Position, struct FVector* Direction, float Magnitude);
	float ApplyStrainField(bool* Enabled, const struct FVector& Position, float Magnitude, int32 Iterations);
	float ApplyStayDynamicField(bool* Enabled, const struct FVector& Position);
	float ApplyRadialVectorFalloffForce(bool* Enabled, const struct FVector& Position, float Magnitude);
	void ApplyRadialForce(bool* Enabled, const struct FVector& Position, float Magnitude);
	class UFieldNodeBase* ApplyPhysicsField(bool* Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData** MetaData);
	void ApplyLinearForce(bool* Enabled, struct FVector* Direction, float Magnitude);
	class UFieldNodeBase* AddPersistentField(bool* Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData** MetaData);
	class UFieldNodeBase* AddFieldCommand(bool* Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData** MetaData);
};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaData
class UFieldSystemMetaData : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UFieldSystemMetaData* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaDataIteration
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
public:
	int32                                        Iterations;                                        // 0xB8(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_278C[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataIteration* GetDefaultObj();

	class UFieldSystemMetaDataIteration* SetMetaDataIteration(int32 Iterations);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	enum class EFieldResolutionType              ResolutionType;                                    // 0xB8(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2790[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataProcessingResolution* GetDefaultObj();

	class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType* ResolutionType);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaDataFilter
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
public:
	enum class EFieldFilterType                  FilterType;                                        // 0xB8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EFieldObjectType                  ObjectType;                                        // 0xB9(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	enum class EFieldPositionType                PositionType;                                      // 0xBA(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_27B8[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataFilter* GetDefaultObj();

	class UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldObjectType ObjectType);
};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.FieldNodeBase
class UFieldNodeBase : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UFieldNodeBase* GetDefaultObj();

};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.FieldNodeInt
class UFieldNodeInt : public UFieldNodeBase
{
public:

	static class UClass* StaticClass();
	static class UFieldNodeInt* GetDefaultObj();

};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.FieldNodeFloat
class UFieldNodeFloat : public UFieldNodeBase
{
public:

	static class UClass* StaticClass();
	static class UFieldNodeFloat* GetDefaultObj();

};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.FieldNodeVector
class UFieldNodeVector : public UFieldNodeBase
{
public:

	static class UClass* StaticClass();
	static class UFieldNodeVector* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.UniformInteger
class UUniformInteger : public UFieldNodeInt
{
public:
	int32                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27C0[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformInteger* GetDefaultObj();

	class UUniformInteger* SetUniformInteger(int32 Magnitude);
};

// 0x30 (0xE8 - 0xB8)
// Class FieldSystemEngine.RadialIntMask
class URadialIntMask : public UFieldNodeInt
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_27C9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xC0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	int32                                        InteriorValue;                                     // 0xD8(0x4)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ExteriorValue;                                     // 0xDC(0x4)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESetMaskConditionType             SetMaskCondition;                                  // 0xE0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_27CC[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URadialIntMask* GetDefaultObj();

	class URadialIntMask* SetRadialIntMask(const struct FVector& Position, enum class ESetMaskConditionType* SetMaskConditionIn);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.UniformScalar
class UUniformScalar : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27D4[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformScalar* GetDefaultObj();

	class UUniformScalar* SetUniformScalar(float Magnitude);
};

// 0x30 (0xE8 - 0xB8)
// Class FieldSystemEngine.WaveScalar
class UWaveScalar : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27DF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xC0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Wavelength;                                        // 0xD8(0x4)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Period;                                            // 0xDC(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	enum class EWaveFunctionType                 Function;                                          // 0xE0(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
	enum class EFieldFalloffType                 Falloff;                                           // 0xE1(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_27E1[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWaveScalar* GetDefaultObj();

	class UWaveScalar* SetWaveScalar(float Magnitude, const struct FVector& Position, float* Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType* Falloff);
};

// 0x38 (0xF0 - 0xB8)
// Class FieldSystemEngine.RadialFalloff
class URadialFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0xBC(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0xC0(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0xC4(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	float                                        Radius;                                            // 0xC8(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_27EF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xD0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	enum class EFieldFalloffType                 Falloff;                                           // 0xE8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_27F1[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URadialFalloff* GetDefaultObj();

	class URadialFalloff* SetRadialFalloff(float Magnitude, float Default, const struct FVector& Position, enum class EFieldFalloffType* Falloff);
};

// 0x50 (0x108 - 0xB8)
// Class FieldSystemEngine.PlaneFalloff
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0xBC(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0xC0(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0xC4(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	float                                        Distance;                                          // 0xC8(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27FF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xD0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Normal;                                            // 0xE8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	enum class EFieldFalloffType                 Falloff;                                           // 0x100(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_2801[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlaneFalloff* GetDefaultObj();

	class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float Default, const struct FVector& Position, enum class EFieldFalloffType* Falloff);
};

// 0x88 (0x140 - 0xB8)
// Class FieldSystemEngine.BoxFalloff
class UBoxFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0xBC(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0xC0(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0xC4(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	uint8                                        Pad_2805[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0xD0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class EFieldFalloffType                 Falloff;                                           // 0x130(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_2807[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBoxFalloff* GetDefaultObj();

	class UBoxFalloff* SetBoxFalloff(float Magnitude, float Default, struct FTransform* Transform, enum class EFieldFalloffType* Falloff);
};

// 0x68 (0x120 - 0xB8)
// Class FieldSystemEngine.NoiseField
class UNoiseField : public UFieldNodeFloat
{
public:
	float                                        MinRange;                                          // 0xB8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0xBC(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            Transform;                                         // 0xC0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)

	static class UClass* StaticClass();
	static class UNoiseField* GetDefaultObj();

	class UNoiseField* SetNoiseField(struct FTransform* Transform);
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.UniformVector
class UUniformVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2814[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Direction;                                         // 0xC0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UUniformVector* GetDefaultObj();

	class UUniformVector* SetUniformVector(float Magnitude, struct FVector* Direction);
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.RadialVector
class URadialVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2823[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xC0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class URadialVector* GetDefaultObj();

	class URadialVector* SetRadialVector(float Magnitude, const struct FVector& Position);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.RandomVector
class URandomVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2826[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URandomVector* GetDefaultObj();

	class URandomVector* SetRandomVector(float Magnitude);
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.OperatorField
class UOperatorField : public UFieldNodeBase
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_282D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldNodeBase*                        RightField;                                        // 0xC0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UFieldNodeBase*                        LeftField;                                         // 0xC8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFieldOperationType               Operation;                                         // 0xD0(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_282F[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOperatorField* GetDefaultObj();

	class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase** LeftField, class UFieldNodeBase** RightField);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.ToIntegerField
class UToIntegerField : public UFieldNodeInt
{
public:
	class UFieldNodeFloat*                       FloatField;                                        // 0xB8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UToIntegerField* GetDefaultObj();

	class UToIntegerField* SetToIntegerField(class UFieldNodeFloat** FloatField);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.ToFloatField
class UToFloatField : public UFieldNodeFloat
{
public:
	class UFieldNodeInt*                         IntField;                                          // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UToFloatField* GetDefaultObj();

	class UToFloatField* SetToFloatField(class UFieldNodeInt** IntegerField);
};

// 0x18 (0xD0 - 0xB8)
// Class FieldSystemEngine.CullingField
class UCullingField : public UFieldNodeBase
{
public:
	class UFieldNodeBase*                        Culling;                                           // 0xB8(0x8)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UFieldNodeBase*                        Field;                                             // 0xC0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)
	enum class EFieldCullingOperationType        Operation;                                         // 0xC8(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2848[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCullingField* GetDefaultObj();

	class UCullingField* SetCullingField();
};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.ReturnResultsTerminal
class UReturnResultsTerminal : public UFieldNodeBase
{
public:

	static class UClass* StaticClass();
	static class UReturnResultsTerminal* GetDefaultObj();

	class UReturnResultsTerminal* SetReturnResultsTerminal();
};

}


