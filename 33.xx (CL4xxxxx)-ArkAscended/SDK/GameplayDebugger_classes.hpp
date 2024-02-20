#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x588 - 0x4C8)
// Class GameplayDebugger.GameplayDebuggerCategoryReplicator
class AGameplayDebuggerCategoryReplicator : public AActor
{
public:
	class APlayerController*                     OwnerPC;                                           // 0x4C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsEnabled;                                        // 0x4D0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_647[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGameplayDebuggerNetPack              ReplicatedData;                                    // 0x4D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGameplayDebuggerDebugActor           DebugActor;                                        // 0x4F0(0x14)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_64B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGameplayDebuggerVisLogSync           VisLogSync;                                        // 0x508(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UGameplayDebuggerRenderingComponent*   RenderingComp;                                     // 0x518(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_64D[0x68];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AGameplayDebuggerCategoryReplicator* GetDefaultObj();

	struct FVector ServerSetViewPoint();
	bool ServerSetEnabled();
	bool ServerSetDebugActor(class AActor** Actor);
	bool ServerSetCategoryEnabled();
	int32 ServerSendExtensionInputEvent();
	int32 ServerSendCategoryInputEvent();
	void ServerResetViewPoint();
	void OnRep_ReplicatedData();
	struct FGameplayDebuggerDataPackRPCParams ClientDataPackPacket();
};

// 0x230 (0x258 - 0x28)
// Class GameplayDebugger.GameplayDebuggerConfig
class UGameplayDebuggerConfig : public UObject
{
public:
	struct FKey                                  ActivationKey;                                     // 0x28(0x18)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategoryRowNextKey;                                // 0x40(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategoryRowPrevKey;                                // 0x58(0x18)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot0;                                     // 0x70(0x18)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot1;                                     // 0x88(0x18)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot2;                                     // 0xA0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot3;                                     // 0xB8(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot4;                                     // 0xD0(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot5;                                     // 0xE8(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot6;                                     // 0x100(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot7;                                     // 0x118(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot8;                                     // 0x130(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot9;                                     // 0x148(0x18)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugCanvasPaddingLeft;                            // 0x160(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugCanvasPaddingRight;                           // 0x164(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugCanvasPaddingTop;                             // 0x168(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugCanvasPaddingBottom;                          // 0x16C(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDebugCanvasEnableTextShadow;                      // 0x170(0x1)(ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_65B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGameplayDebuggerCategoryConfig> Categories;                                        // 0x178(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	TArray<struct FGameplayDebuggerExtensionConfig> Extensions;                                        // 0x188(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_65E[0xC0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayDebuggerConfig* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class GameplayDebugger.GameplayDebuggerUserSettings
class UGameplayDebuggerUserSettings : public UDeveloperSettings
{
public:
	uint8                                        bEnableGameplayDebuggerInEditor : 1;               // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_48 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_66A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MaxViewDistance;                                   // 0x3C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxViewAngle;                                      // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        FontSize;                                          // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayDebuggerUserSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GameplayDebugger.GameplayDebuggerLocalController
class UGameplayDebuggerLocalController : public UObject
{
public:
	class AGameplayDebuggerCategoryReplicator*   CachedReplicator;                                  // 0x28(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AGameplayDebuggerPlayerManager*        CachedPlayerManager;                               // 0x30(0x8)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                DebugActorCandidate;                               // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UFont*                                 HUDFont;                                           // 0x40(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_672[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayDebuggerLocalController* GetDefaultObj();

};

// 0x30 (0x4F8 - 0x4C8)
// Class GameplayDebugger.GameplayDebuggerPlayerManager
class AGameplayDebuggerPlayerManager : public AActor
{
public:
	uint8                                        Pad_674[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGameplayDebuggerPlayerData>   PlayerData;                                        // 0x4D0(0x10)(ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AGameplayDebuggerCategoryReplicator*> PendingRegistrations;                              // 0x4E0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_677[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AGameplayDebuggerPlayerManager* GetDefaultObj();

};

// 0x60 (0x750 - 0x6F0)
// Class GameplayDebugger.GameplayDebuggerRenderingComponent
class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_679[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayDebuggerRenderingComponent* GetDefaultObj();

};

}


