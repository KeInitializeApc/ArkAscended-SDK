#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class Constraints.TransformableHandle
class UTransformableHandle : public UObject
{
public:
	struct FMovieSceneObjectBindingID            ConstraintBindingID;                               // 0x28(0x18)(ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C41[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTransformableHandle* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class Constraints.ConstraintsActor
class AConstraintsActor : public AActor
{
public:
	class UConstraintsManager*                   ConstraintsManager;                                // 0x4C8(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AConstraintsActor* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class Constraints.TickableConstraint
class UTickableConstraint : public UObject
{
public:
	struct FConstraintTickFunction               ConstraintTick;                                    // 0x28(0x40)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Active;                                            // 0x68(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_C45[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTickableConstraint* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Constraints.ConstraintsManager
class UConstraintsManager : public UObject
{
public:
	FMulticastSparseDelegateProperty_            OnConstraintAdded_BP;                              // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastSparseDelegateProperty_            OnConstraintRemoved_BP;                            // 0x29(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C4C[0xE];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UTickableConstraint*>           Constraints;                                       // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UConstraintsManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Constraints.ConstraintsScriptingLibrary
class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UConstraintsScriptingLibrary* GetDefaultObj();

	class UWorld* RemoveThisConstraint(class UTickableConstraint** InTickableConstraint, bool ReturnValue);
	int32 RemoveConstraint(bool ReturnValue);
	class UWorld* GetManager(class UConstraintsManager* ReturnValue);
	class UWorld* GetConstraintsArray(const TArray<class UTickableConstraint*>& ReturnValue);
	class UObject* CreateTransformableHandle(class FName* InAttachmentName, class UTransformableHandle* ReturnValue);
	class UWorld* CreateTransformableComponentHandle(class USceneComponent** InSceneComponent, class FName* InSocketName, class UTransformableComponentHandle* ReturnValue);
	class UWorld* CreateFromType(enum class ETransformConstraintType InType, class UTickableTransformConstraint* ReturnValue);
	class UWorld* AddConstraint(class UTransformableHandle** InParentHandle, class UTransformableHandle** InChildHandle, class UTickableTransformConstraint** InConstraint, bool bMaintainOffset, bool ReturnValue);
};

// 0x10 (0x68 - 0x58)
// Class Constraints.TransformableComponentHandle
class UTransformableComponentHandle : public UTransformableHandle
{
public:
	TWeakObjectPtr<class USceneComponent>        Component;                                         // 0x58(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  SocketName;                                        // 0x60(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UTransformableComponentHandle* GetDefaultObj();

};

// 0x20 (0x90 - 0x70)
// Class Constraints.TickableTransformConstraint
class UTickableTransformConstraint : public UTickableConstraint
{
public:
	class UTransformableHandle*                  ParentTRSHandle;                                   // 0x70(0x8)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTransformableHandle*                  ChildTRSHandle;                                    // 0x78(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bMaintainOffset;                                   // 0x80(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C7B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x84(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         bDynamicOffset;                                    // 0x88(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ETransformConstraintType          Type;                                              // 0x89(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_C7C[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTickableTransformConstraint* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class Constraints.TickableTranslationConstraint
class UTickableTranslationConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_C7D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetTranslation;                                 // 0x98(0x18)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFilterOptionPerAxis                  AxisFilter;                                        // 0xB0(0x3)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_C7E[0x5];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTickableTranslationConstraint* GetDefaultObj();

};

// 0x40 (0xD0 - 0x90)
// Class Constraints.TickableRotationConstraint
class UTickableRotationConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_C82[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 OffsetRotation;                                    // 0xA0(0x20)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFilterOptionPerAxis                  AxisFilter;                                        // 0xC0(0x3)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_C83[0xD];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTickableRotationConstraint* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class Constraints.TickableScaleConstraint
class UTickableScaleConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_C84[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetScale;                                       // 0x98(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFilterOptionPerAxis                  AxisFilter;                                        // 0xB0(0x3)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_C85[0x5];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTickableScaleConstraint* GetDefaultObj();

};

// 0x80 (0x110 - 0x90)
// Class Constraints.TickableParentConstraint
class UTickableParentConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_C8A[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            OffsetTransform;                                   // 0xA0(0x60)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bScaling;                                          // 0x100(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransformFilter                      TransformFilter;                                   // 0x101(0x9)(BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance)
	uint8                                        Pad_C8D[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTickableParentConstraint* GetDefaultObj();

};

// 0x18 (0xA8 - 0x90)
// Class Constraints.TickableLookAtConstraint
class UTickableLookAtConstraint : public UTickableTransformConstraint
{
public:
	struct FVector                               Axis;                                              // 0x90(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UTickableLookAtConstraint* GetDefaultObj();

};

}


