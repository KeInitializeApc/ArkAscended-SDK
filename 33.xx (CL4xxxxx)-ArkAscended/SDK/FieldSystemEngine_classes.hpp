#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4C8 - 0x4C0)
// Class FieldSystemEngine.FieldSystemActor
class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                 FieldSystemComponent;                              // 0x4C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class AFieldSystemActor* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class FieldSystemEngine.FieldSystem
class UFieldSystem : public UObject
{
public:
	uint8                                        Pad_1ECB[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystem* GetDefaultObj();

};

// 0xD0 (0x760 - 0x690)
// Class FieldSystemEngine.FieldSystemComponent
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	class UFieldSystem*                          FieldSystem;                                       // 0x690(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	bool                                         bIsWorldField;                                     // 0x698(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bIsChaosField;                                     // 0x699(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_1F04[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class AChaosSolverActor>> SupportedSolvers;                                  // 0x6A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFieldObjectCommands                  ConstructionCommands;                              // 0x6B0(0x30)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFieldObjectCommands                  BufferCommands;                                    // 0x6E0(0x30)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F05[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemComponent* GetDefaultObj();

	void ResetFieldSystem();
	void RemovePersistentFields();
	float ApplyUniformVectorFalloffForce(bool* Enabled, float Radius);
	int32 ApplyStrainField(bool* Enabled, float Radius);
	struct FVector ApplyStayDynamicField(bool* Enabled, float Radius);
	float ApplyRadialVectorFalloffForce(bool* Enabled, float Radius);
	float ApplyRadialForce(bool* Enabled);
	class UFieldNodeBase* ApplyPhysicsField(bool* Enabled, class UFieldSystemMetaData* MetaData);
	float ApplyLinearForce(bool* Enabled);
	class UFieldNodeBase* AddPersistentField(bool* Enabled, class UFieldSystemMetaData* MetaData);
	class UFieldNodeBase* AddFieldCommand(bool* Enabled, class UFieldSystemMetaData* MetaData);
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
	int32                                        Iterations;                                        // 0xB8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F13[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataIteration* GetDefaultObj();

	class UFieldSystemMetaDataIteration* SetMetaDataIteration();
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	enum class EFieldResolutionType              ResolutionType;                                    // 0xB8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F21[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataProcessingResolution* GetDefaultObj();

	class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType();
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaDataFilter
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
public:
	enum class EFieldFilterType                  FilterType;                                        // 0xB8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EFieldObjectType                  ObjectType;                                        // 0xB9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EFieldPositionType                PositionType;                                      // 0xBA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F30[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataFilter* GetDefaultObj();

	class UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldPositionType* PositionType);
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
	int32                                        Magnitude;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F36[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformInteger* GetDefaultObj();

	class UUniformInteger* SetUniformInteger();
};

// 0x30 (0xE8 - 0xB8)
// Class FieldSystemEngine.RadialIntMask
class URadialIntMask : public UFieldNodeInt
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1F41[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xC0(0x18)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	int32                                        InteriorValue;                                     // 0xD8(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ExteriorValue;                                     // 0xDC(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ESetMaskConditionType             SetMaskCondition;                                  // 0xE0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F44[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URadialIntMask* GetDefaultObj();

	class URadialIntMask* SetRadialIntMask(float Radius);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.UniformScalar
class UUniformScalar : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F4D[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUniformScalar* GetDefaultObj();

	class UUniformScalar* SetUniformScalar();
};

// 0x30 (0xE8 - 0xB8)
// Class FieldSystemEngine.WaveScalar
class UWaveScalar : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F5B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xC0(0x18)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	float                                        Wavelength;                                        // 0xD8(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Period;                                            // 0xDC(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	enum class EWaveFunctionType                 Function;                                          // 0xE0(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
	enum class EFieldFalloffType                 Falloff;                                           // 0xE1(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_1F5D[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWaveScalar* GetDefaultObj();

	class UWaveScalar* SetWaveScalar(enum class EWaveFunctionType Function, enum class EFieldFalloffType* Falloff);
};

// 0x38 (0xF0 - 0xB8)
// Class FieldSystemEngine.RadialFalloff
class URadialFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0xBC(0x4)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0xC0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Default;                                           // 0xC4(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	float                                        Radius;                                            // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1F6E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xD0(0x18)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	enum class EFieldFalloffType                 Falloff;                                           // 0xE8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_1F70[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URadialFalloff* GetDefaultObj();

	class URadialFalloff* SetRadialFalloff(float Default, float Radius, enum class EFieldFalloffType* Falloff);
};

// 0x50 (0x108 - 0xB8)
// Class FieldSystemEngine.PlaneFalloff
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0xBC(0x4)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0xC0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Default;                                           // 0xC4(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	float                                        Distance;                                          // 0xC8(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F92[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xD0(0x18)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	struct FVector                               Normal;                                            // 0xE8(0x18)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class EFieldFalloffType                 Falloff;                                           // 0x100(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_1F93[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlaneFalloff* GetDefaultObj();

	class UPlaneFalloff* SetPlaneFalloff(float Default, enum class EFieldFalloffType* Falloff);
};

// 0x88 (0x140 - 0xB8)
// Class FieldSystemEngine.BoxFalloff
class UBoxFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0xBC(0x4)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0xC0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Default;                                           // 0xC4(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	uint8                                        Pad_1FA4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0xD0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class EFieldFalloffType                 Falloff;                                           // 0x130(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_1FA5[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBoxFalloff* GetDefaultObj();

	class UBoxFalloff* SetBoxFalloff(float Default, struct FTransform* Transform, enum class EFieldFalloffType* Falloff);
};

// 0x68 (0x120 - 0xB8)
// Class FieldSystemEngine.NoiseField
class UNoiseField : public UFieldNodeFloat
{
public:
	float                                        MinRange;                                          // 0xB8(0x4)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0xBC(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
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
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1FB5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Direction;                                         // 0xC0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UUniformVector* GetDefaultObj();

	class UUniformVector* SetUniformVector();
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.RadialVector
class URadialVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1FC3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xC0(0x18)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)

	static class UClass* StaticClass();
	static class URadialVector* GetDefaultObj();

	class URadialVector* SetRadialVector();
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.RandomVector
class URandomVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1FCA[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URandomVector* GetDefaultObj();

	class URandomVector* SetRandomVector();
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.OperatorField
class UOperatorField : public UFieldNodeBase
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1FD4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldNodeBase*                        RightField;                                        // 0xC0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class UFieldNodeBase*                        LeftField;                                         // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFieldOperationType               Operation;                                         // 0xD0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FD6[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOperatorField* GetDefaultObj();

	class UOperatorField* SetOperatorField();
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.ToIntegerField
class UToIntegerField : public UFieldNodeInt
{
public:
	class UFieldNodeFloat*                       FloatField;                                        // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UToIntegerField* GetDefaultObj();

	class UToIntegerField* SetToIntegerField();
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.ToFloatField
class UToFloatField : public UFieldNodeFloat
{
public:
	class UFieldNodeInt*                         IntField;                                          // 0xB8(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UToFloatField* GetDefaultObj();

	class UToFloatField* SetToFloatField();
};

// 0x18 (0xD0 - 0xB8)
// Class FieldSystemEngine.CullingField
class UCullingField : public UFieldNodeBase
{
public:
	class UFieldNodeBase*                        Culling;                                           // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class UFieldNodeBase*                        Field;                                             // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	enum class EFieldCullingOperationType        Operation;                                         // 0xC8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FEE[0x7];                                     // Fixing Size Of Struct > TateDumper <

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


