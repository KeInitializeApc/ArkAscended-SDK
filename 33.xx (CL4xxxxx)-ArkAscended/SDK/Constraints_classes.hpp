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
	struct FMovieSceneObjectBindingID            ConstraintBindingID;                               // 0x28(0x18)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B70[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTransformableHandle* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class Constraints.ConstraintsActor
class AConstraintsActor : public AActor
{
public:
	class UConstraintsManager*                   ConstraintsManager;                                // 0x4C8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class AConstraintsActor* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class Constraints.TickableConstraint
class UTickableConstraint : public UObject
{
public:
	struct FConstraintTickFunction               ConstraintTick;                                    // 0x28(0x40)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Active;                                            // 0x68(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_B75[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTickableConstraint* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Constraints.ConstraintsManager
class UConstraintsManager : public UObject
{
public:
	FMulticastSparseDelegateProperty_            OnConstraintAdded_BP;                              // 0x28(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastSparseDelegateProperty_            OnConstraintRemoved_BP;                            // 0x29(0x1)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B7B[0xE];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UTickableConstraint*>           Constraints;                                       // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)

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

	void RemoveThisConstraint(class UWorld** InWorld, class UTickableConstraint* InTickableConstraint, bool ReturnValue);
	void RemoveConstraint(class UWorld** InWorld, int32* InIndex, bool ReturnValue);
	void GetManager(class UWorld** InWorld, class UConstraintsManager* ReturnValue);
	void GetConstraintsArray(class UWorld** InWorld, const TArray<class UTickableConstraint*>& ReturnValue);
	void CreateTransformableHandle(class UWorld** InWorld, class UObject* InObject, class FName InAttachmentName, class UTransformableHandle* ReturnValue);
	void CreateTransformableComponentHandle(class UWorld** InWorld, class USceneComponent* InSceneComponent, class FName InSocketName, class UTransformableComponentHandle* ReturnValue);
	enum class ETransformConstraintType CreateFromType(class UWorld** InWorld, class UTickableTransformConstraint* ReturnValue);
	void AddConstraint(class UWorld** InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, bool* bMaintainOffset, bool ReturnValue);
};

// 0x10 (0x68 - 0x58)
// Class Constraints.TransformableComponentHandle
class UTransformableComponentHandle : public UTransformableHandle
{
public:
	TWeakObjectPtr<class USceneComponent>        Component;                                         // 0x58(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FName                                  SocketName;                                        // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UTransformableComponentHandle* GetDefaultObj();

};

// 0x20 (0x90 - 0x70)
// Class Constraints.TickableTransformConstraint
class UTickableTransformConstraint : public UTickableConstraint
{
public:
	class UTransformableHandle*                  ParentTRSHandle;                                   // 0x70(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTransformableHandle*                  ChildTRSHandle;                                    // 0x78(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bMaintainOffset;                                   // 0x80(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BD2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x84(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
	bool                                         bDynamicOffset;                                    // 0x88(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class ETransformConstraintType          Type;                                              // 0x89(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_BD5[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTickableTransformConstraint* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class Constraints.TickableTranslationConstraint
class UTickableTranslationConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_BD9[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetTranslation;                                 // 0x98(0x18)(ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FFilterOptionPerAxis                  AxisFilter;                                        // 0xB0(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_BDB[0x5];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTickableTranslationConstraint* GetDefaultObj();

};

// 0x40 (0xD0 - 0x90)
// Class Constraints.TickableRotationConstraint
class UTickableRotationConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_BDC[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 OffsetRotation;                                    // 0xA0(0x20)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFilterOptionPerAxis                  AxisFilter;                                        // 0xC0(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_BDD[0xD];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTickableRotationConstraint* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class Constraints.TickableScaleConstraint
class UTickableScaleConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_BE0[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetScale;                                       // 0x98(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FFilterOptionPerAxis                  AxisFilter;                                        // 0xB0(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_BE1[0x5];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTickableScaleConstraint* GetDefaultObj();

};

// 0x80 (0x110 - 0x90)
// Class Constraints.TickableParentConstraint
class UTickableParentConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_BE4[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            OffsetTransform;                                   // 0xA0(0x60)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bScaling;                                          // 0x100(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTransformFilter                      TransformFilter;                                   // 0x101(0x9)(BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        Pad_BE6[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTickableParentConstraint* GetDefaultObj();

};

// 0x18 (0xA8 - 0x90)
// Class Constraints.TickableLookAtConstraint
class UTickableLookAtConstraint : public UTickableTransformConstraint
{
public:
	struct FVector                               Axis;                                              // 0x90(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UTickableLookAtConstraint* GetDefaultObj();

};

}


