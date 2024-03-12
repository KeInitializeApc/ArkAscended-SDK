#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class LiveLinkComponents.LiveLinkComponentSettings
class ULiveLinkComponentSettings : public UObject
{
public:
	TMap<class UClass*, class UClass*>           DefaultControllerForRole;                          // 0x28(0x50)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULiveLinkComponentSettings* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class LiveLinkComponents.LiveLinkControllerBase
class ULiveLinkControllerBase : public UObject
{
public:
	struct FComponentReference                   ComponentPicker;                                   // 0x28(0x28)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D5B[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkControllerBase* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class LiveLinkComponents.LiveLinkLightController
class ULiveLinkLightController : public ULiveLinkControllerBase
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkLightController* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class LiveLinkComponents.LiveLinkTransformController
class ULiveLinkTransformController : public ULiveLinkControllerBase
{
public:
	struct FLiveLinkTransformControllerData      TransformData;                                     // 0x68(0x6)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D6A[0x2];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkTransformController* GetDefaultObj();

};

// 0xA8 (0x160 - 0xB8)
// Class LiveLinkComponents.LiveLinkComponentController
class ULiveLinkComponentController : public UActorComponent
{
public:
	struct FLiveLinkSubjectRepresentation        SubjectRepresentation;                             // 0xB8(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class UClass*, class ULiveLinkControllerBase*> ControllerMap;                                     // 0xC8(0x50)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUpdateInEditor;                                   // 0x118(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D7D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnLiveLinkUpdated;                                 // 0x120(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerMapUpdatedDelegate;                    // 0x130(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDisableEvaluateLiveLinkWhenSpawnable;             // 0x140(0x1)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEvaluateLiveLink;                                 // 0x141(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUpdateInPreviewEditor;                            // 0x142(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D81[0x1D];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkComponentController* GetDefaultObj();

	struct FLiveLinkSubjectRepresentation SetSubjectRepresentation();
	struct FLiveLinkSubjectRepresentation GetSubjectRepresentation();
};

}


