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
	class UFieldSystemComponent*                 FieldSystemComponent;                              // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AFieldSystemActor* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class FieldSystemEngine.FieldSystem
class UFieldSystem : public UObject
{
public:
	uint8                                        Pad_26F3[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystem* GetDefaultObj();

};

// 0xD8 (0x770 - 0x698)
// Class FieldSystemEngine.FieldSystemComponent
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	class UFieldSystem*                          FieldSystem;                                       // 0x698(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsWorldField;                                     // 0x6A0(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bIsChaosField;                                     // 0x6A1(0x1)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_270D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class AChaosSolverActor>> SupportedSolvers;                                  // 0x6A8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFieldObjectCommands                  ConstructionCommands;                              // 0x6B8(0x30)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFieldObjectCommands                  BufferCommands;                                    // 0x6E8(0x30)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_270F[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemComponent* GetDefaultObj();

	void ResetFieldSystem();
	void RemovePersistentFields();
	struct FVector ApplyUniformVectorFalloffForce(bool* Enabled, const struct FVector& Position, float Radius, float Magnitude);
	int32 ApplyStrainField(bool* Enabled, const struct FVector& Position, float Radius, float Magnitude);
	void ApplyStayDynamicField(bool* Enabled, const struct FVector& Position, float Radius);
	void ApplyRadialVectorFalloffForce(bool* Enabled, const struct FVector& Position, float Radius, float Magnitude);
	void ApplyRadialForce(bool* Enabled, const struct FVector& Position, float Magnitude);
	class UFieldNodeBase* ApplyPhysicsField(bool* Enabled, enum class EFieldPhysicsType Target);
	struct FVector ApplyLinearForce(bool* Enabled, float Magnitude);
	class UFieldNodeBase* AddPersistentField(bool* Enabled, enum class EFieldPhysicsType Target);
	class UFieldNodeBase* AddFieldCommand(bool* Enabled, enum class EFieldPhysicsType Target);
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
	int32                                        Iterations;                                        // 0xB8(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_2713[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataIteration* GetDefaultObj();

	int32 SetMetaDataIteration(class UFieldSystemMetaDataIteration* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	enum class EFieldResolutionType              ResolutionType;                                    // 0xB8(0x1)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2717[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataProcessingResolution* GetDefaultObj();

	void SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType* ResolutionType, class UFieldSystemMetaDataProcessingResolution* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaDataFilter
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
public:
	enum class EFieldFilterType                  FilterType;                                        // 0xB8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EFieldObjectType                  ObjectType;                                        // 0xB9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	enum class EFieldPositionType                PositionType;                                      // 0xBA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_271A[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataFilter* GetDefaultObj();

	enum class EFieldObjectType SetMetaDataFilterType(enum class EFieldFilterType* FilterType, enum class EFieldPositionType* PositionType, class UFieldSystemMetaDataFilter* ReturnValue);
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
	int32                                        Magnitude;                                         // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_271F[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformInteger* GetDefaultObj();

	void SetUniformInteger(int32 Magnitude, class UUniformInteger* ReturnValue);
};

// 0x30 (0xE8 - 0xB8)
// Class FieldSystemEngine.RadialIntMask
class URadialIntMask : public UFieldNodeInt
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2724[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xC0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	int32                                        InteriorValue;                                     // 0xD8(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ExteriorValue;                                     // 0xDC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESetMaskConditionType             SetMaskCondition;                                  // 0xE0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2726[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URadialIntMask* GetDefaultObj();

	void SetRadialIntMask(float Radius, const struct FVector& Position, int32* InteriorValue, int32* ExteriorValue, enum class ESetMaskConditionType* SetMaskConditionIn, class URadialIntMask* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.UniformScalar
class UUniformScalar : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_272C[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformScalar* GetDefaultObj();

	void SetUniformScalar(float Magnitude, class UUniformScalar* ReturnValue);
};

// 0x30 (0xE8 - 0xB8)
// Class FieldSystemEngine.WaveScalar
class UWaveScalar : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2734[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xC0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Wavelength;                                        // 0xD8(0x4)(Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Period;                                            // 0xDC(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	enum class EWaveFunctionType                 Function;                                          // 0xE0(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
	enum class EFieldFalloffType                 Falloff;                                           // 0xE1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_2735[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWaveScalar* GetDefaultObj();

	enum class EFieldFalloffType SetWaveScalar(float Magnitude, const struct FVector& Position, float* Wavelength, float* Period, enum class EWaveFunctionType Function, class UWaveScalar* ReturnValue);
};

// 0x38 (0xF0 - 0xB8)
// Class FieldSystemEngine.RadialFalloff
class URadialFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0xBC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0xC0(0x4)(Edit, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0xC4(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	float                                        Radius;                                            // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_273A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xD0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	enum class EFieldFalloffType                 Falloff;                                           // 0xE8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_273B[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URadialFalloff* GetDefaultObj();

	enum class EFieldFalloffType SetRadialFalloff(float Magnitude, float* MinRange, float* MaxRange, float Default, float Radius, const struct FVector& Position, class URadialFalloff* ReturnValue);
};

// 0x50 (0x108 - 0xB8)
// Class FieldSystemEngine.PlaneFalloff
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0xBC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0xC0(0x4)(Edit, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0xC4(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	float                                        Distance;                                          // 0xC8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2752[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xD0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Normal;                                            // 0xE8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	enum class EFieldFalloffType                 Falloff;                                           // 0x100(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_2754[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlaneFalloff* GetDefaultObj();

	enum class EFieldFalloffType SetPlaneFalloff(float Magnitude, float* MinRange, float* MaxRange, float Default, float* Distance, const struct FVector& Position, class UPlaneFalloff* ReturnValue);
};

// 0x88 (0x140 - 0xB8)
// Class FieldSystemEngine.BoxFalloff
class UBoxFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0xBC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0xC0(0x4)(Edit, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0xC4(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	uint8                                        Pad_275A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0xD0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class EFieldFalloffType                 Falloff;                                           // 0x130(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_275B[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBoxFalloff* GetDefaultObj();

	enum class EFieldFalloffType SetBoxFalloff(float Magnitude, float* MinRange, float* MaxRange, float Default, struct FTransform* Transform, class UBoxFalloff* ReturnValue);
};

// 0x68 (0x120 - 0xB8)
// Class FieldSystemEngine.NoiseField
class UNoiseField : public UFieldNodeFloat
{
public:
	float                                        MinRange;                                          // 0xB8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0xBC(0x4)(Edit, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            Transform;                                         // 0xC0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)

	static class UClass* StaticClass();
	static class UNoiseField* GetDefaultObj();

	void SetNoiseField(float* MinRange, float* MaxRange, struct FTransform* Transform, class UNoiseField* ReturnValue);
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.UniformVector
class UUniformVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2762[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Direction;                                         // 0xC0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UUniformVector* GetDefaultObj();

	struct FVector SetUniformVector(float Magnitude, class UUniformVector* ReturnValue);
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.RadialVector
class URadialVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2769[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xC0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class URadialVector* GetDefaultObj();

	void SetRadialVector(float Magnitude, const struct FVector& Position, class URadialVector* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.RandomVector
class URandomVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_276E[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URandomVector* GetDefaultObj();

	void SetRandomVector(float Magnitude, class URandomVector* ReturnValue);
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.OperatorField
class UOperatorField : public UFieldNodeBase
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2777[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldNodeBase*                        RightField;                                        // 0xC0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UFieldNodeBase*                        LeftField;                                         // 0xC8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFieldOperationType               Operation;                                         // 0xD0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2778[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOperatorField* GetDefaultObj();

	void SetOperatorField(float Magnitude, class UFieldNodeBase** LeftField, class UFieldNodeBase** RightField, enum class EFieldOperationType* Operation, class UOperatorField* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.ToIntegerField
class UToIntegerField : public UFieldNodeInt
{
public:
	class UFieldNodeFloat*                       FloatField;                                        // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UToIntegerField* GetDefaultObj();

	void SetToIntegerField(class UFieldNodeFloat** FloatField, class UToIntegerField* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.ToFloatField
class UToFloatField : public UFieldNodeFloat
{
public:
	class UFieldNodeInt*                         IntField;                                          // 0xB8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UToFloatField* GetDefaultObj();

	void SetToFloatField(class UFieldNodeInt** IntegerField, class UToFloatField* ReturnValue);
};

// 0x18 (0xD0 - 0xB8)
// Class FieldSystemEngine.CullingField
class UCullingField : public UFieldNodeBase
{
public:
	class UFieldNodeBase*                        Culling;                                           // 0xB8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UFieldNodeBase*                        Field;                                             // 0xC0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)
	enum class EFieldCullingOperationType        Operation;                                         // 0xC8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_278B[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCullingField* GetDefaultObj();

	class UFieldNodeBase* SetCullingField(class UFieldNodeBase** Culling, enum class EFieldCullingOperationType* Operation, class UCullingField* ReturnValue);
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


