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
	class UFieldSystemComponent*                 FieldSystemComponent;                              // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class AFieldSystemActor* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class FieldSystemEngine.FieldSystem
class UFieldSystem : public UObject
{
public:
	uint8                                        Pad_1A97[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystem* GetDefaultObj();

};

// 0xD8 (0x770 - 0x698)
// Class FieldSystemEngine.FieldSystemComponent
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	class UFieldSystem*                          FieldSystem;                                       // 0x698(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bIsWorldField;                                     // 0x6A0(0x1)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsChaosField;                                     // 0x6A1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1AF8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class AChaosSolverActor>> SupportedSolvers;                                  // 0x6A8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FFieldObjectCommands                  ConstructionCommands;                              // 0x6B8(0x30)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FFieldObjectCommands                  BufferCommands;                                    // 0x6E8(0x30)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AFA[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemComponent* GetDefaultObj();

	void ResetFieldSystem();
	void RemovePersistentFields();
	float ApplyUniformVectorFalloffForce(struct FVector* Position, float* Radius);
	int32 ApplyStrainField(struct FVector* Position, float* Radius);
	bool ApplyStayDynamicField(struct FVector* Position, float* Radius);
	float ApplyRadialVectorFalloffForce(struct FVector* Position, float* Radius);
	float ApplyRadialForce(struct FVector* Position);
	class UFieldSystemMetaData* ApplyPhysicsField(class UFieldNodeBase* Field);
	float ApplyLinearForce();
	class UFieldSystemMetaData* AddPersistentField(class UFieldNodeBase* Field);
	class UFieldSystemMetaData* AddFieldCommand(class UFieldNodeBase* Field);
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
	int32                                        Iterations;                                        // 0xB8(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B06[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataIteration* GetDefaultObj();

	int32 SetMetaDataIteration(class UFieldSystemMetaDataIteration* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	enum class EFieldResolutionType              ResolutionType;                                    // 0xB8(0x1)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B0E[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataProcessingResolution* GetDefaultObj();

	enum class EFieldResolutionType SetMetaDataaProcessingResolutionType(class UFieldSystemMetaDataProcessingResolution* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaDataFilter
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
public:
	enum class EFieldFilterType                  FilterType;                                        // 0xB8(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EFieldObjectType                  ObjectType;                                        // 0xB9(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EFieldPositionType                PositionType;                                      // 0xBA(0x1)(Edit, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B1A[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataFilter* GetDefaultObj();

	enum class EFieldPositionType SetMetaDataFilterType(enum class EFieldFilterType FilterType, class UFieldSystemMetaDataFilter* ReturnValue);
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
	int32                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1B34[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformInteger* GetDefaultObj();

	int32 SetUniformInteger(class UUniformInteger* ReturnValue);
};

// 0x30 (0xE8 - 0xB8)
// Class FieldSystemEngine.RadialIntMask
class URadialIntMask : public UFieldNodeInt
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1B4E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xC0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	int32                                        InteriorValue;                                     // 0xD8(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ExteriorValue;                                     // 0xDC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESetMaskConditionType             SetMaskCondition;                                  // 0xE0(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B56[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URadialIntMask* GetDefaultObj();

	enum class ESetMaskConditionType SetRadialIntMask(float* Radius, struct FVector* Position, int32 InteriorValue, int32 ExteriorValue, class URadialIntMask* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.UniformScalar
class UUniformScalar : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1B71[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformScalar* GetDefaultObj();

	float SetUniformScalar(class UUniformScalar* ReturnValue);
};

// 0x30 (0xE8 - 0xB8)
// Class FieldSystemEngine.WaveScalar
class UWaveScalar : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1B91[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xC0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        Wavelength;                                        // 0xD8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Period;                                            // 0xDC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
	enum class EWaveFunctionType                 Function;                                          // 0xE0(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
	enum class EFieldFalloffType                 Falloff;                                           // 0xE1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
	uint8                                        Pad_1B95[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWaveScalar* GetDefaultObj();

	enum class EFieldFalloffType SetWaveScalar(struct FVector* Position, float Wavelength, enum class EWaveFunctionType Function, class UWaveScalar* ReturnValue);
};

// 0x38 (0xF0 - 0xB8)
// Class FieldSystemEngine.RadialFalloff
class URadialFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0xBC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0xC0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Default;                                           // 0xC4(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	float                                        Radius;                                            // 0xC8(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1BD0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xD0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	enum class EFieldFalloffType                 Falloff;                                           // 0xE8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
	uint8                                        Pad_1BD2[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URadialFalloff* GetDefaultObj();

	enum class EFieldFalloffType SetRadialFalloff(float MinRange, float MaxRange, float Default, float* Radius, struct FVector* Position, class URadialFalloff* ReturnValue);
};

// 0x50 (0x108 - 0xB8)
// Class FieldSystemEngine.PlaneFalloff
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0xBC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0xC0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Default;                                           // 0xC4(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	float                                        Distance;                                          // 0xC8(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1BFB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xD0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FVector                               Normal;                                            // 0xE8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class EFieldFalloffType                 Falloff;                                           // 0x100(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
	uint8                                        Pad_1BFD[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlaneFalloff* GetDefaultObj();

	enum class EFieldFalloffType SetPlaneFalloff(float MinRange, float MaxRange, float Default, struct FVector* Position, struct FVector* Normal, class UPlaneFalloff* ReturnValue);
};

// 0x88 (0x140 - 0xB8)
// Class FieldSystemEngine.BoxFalloff
class UBoxFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0xBC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0xC0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Default;                                           // 0xC4(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	uint8                                        Pad_1C12[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0xD0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class EFieldFalloffType                 Falloff;                                           // 0x130(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
	uint8                                        Pad_1C14[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBoxFalloff* GetDefaultObj();

	enum class EFieldFalloffType SetBoxFalloff(float MinRange, float MaxRange, float Default, struct FTransform* Transform, class UBoxFalloff* ReturnValue);
};

// 0x68 (0x120 - 0xB8)
// Class FieldSystemEngine.NoiseField
class UNoiseField : public UFieldNodeFloat
{
public:
	float                                        MinRange;                                          // 0xB8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            Transform;                                         // 0xC0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)

	static class UClass* StaticClass();
	static class UNoiseField* GetDefaultObj();

	void SetNoiseField(float MinRange, float MaxRange, struct FTransform* Transform, class UNoiseField* ReturnValue);
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.UniformVector
class UUniformVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1C30[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Direction;                                         // 0xC0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UUniformVector* GetDefaultObj();

	struct FVector SetUniformVector(class UUniformVector* ReturnValue);
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.RadialVector
class URadialVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1C41[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xC0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class URadialVector* GetDefaultObj();

	float SetRadialVector(struct FVector* Position, class URadialVector* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.RandomVector
class URandomVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1C51[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URandomVector* GetDefaultObj();

	float SetRandomVector(class URandomVector* ReturnValue);
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.OperatorField
class UOperatorField : public UFieldNodeBase
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1C6C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldNodeBase*                        RightField;                                        // 0xC0(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UFieldNodeBase*                        LeftField;                                         // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EFieldOperationType               Operation;                                         // 0xD0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C6E[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOperatorField* GetDefaultObj();

	class UFieldNodeBase* SetOperatorField(enum class EFieldOperationType Operation, class UOperatorField* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.ToIntegerField
class UToIntegerField : public UFieldNodeInt
{
public:
	class UFieldNodeFloat*                       FloatField;                                        // 0xB8(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UToIntegerField* GetDefaultObj();

	class UFieldNodeFloat* SetToIntegerField(class UToIntegerField* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.ToFloatField
class UToFloatField : public UFieldNodeFloat
{
public:
	class UFieldNodeInt*                         IntField;                                          // 0xB8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UToFloatField* GetDefaultObj();

	class UFieldNodeInt* SetToFloatField(class UToFloatField* ReturnValue);
};

// 0x18 (0xD0 - 0xB8)
// Class FieldSystemEngine.CullingField
class UCullingField : public UFieldNodeBase
{
public:
	class UFieldNodeBase*                        Culling;                                           // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UFieldNodeBase*                        Field;                                             // 0xC0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	enum class EFieldCullingOperationType        Operation;                                         // 0xC8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C8D[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCullingField* GetDefaultObj();

	class UFieldNodeBase* SetCullingField(class UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation, class UCullingField* ReturnValue);
};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.ReturnResultsTerminal
class UReturnResultsTerminal : public UFieldNodeBase
{
public:

	static class UClass* StaticClass();
	static class UReturnResultsTerminal* GetDefaultObj();

	void SetReturnResultsTerminal(class UReturnResultsTerminal* ReturnValue);
};

}


