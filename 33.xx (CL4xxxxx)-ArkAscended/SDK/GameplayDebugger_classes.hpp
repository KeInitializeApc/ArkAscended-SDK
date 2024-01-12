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
	class APlayerController*                     OwnerPC;                                           // 0x4C8(0x8)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsEnabled;                                        // 0x4D0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_2F2C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGameplayDebuggerNetPack              ReplicatedData;                                    // 0x4D8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGameplayDebuggerDebugActor           DebugActor;                                        // 0x4F0(0x14)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F2D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGameplayDebuggerVisLogSync           VisLogSync;                                        // 0x508(0x10)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGameplayDebuggerRenderingComponent*   RenderingComp;                                     // 0x518(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F2E[0x68];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AGameplayDebuggerCategoryReplicator* GetDefaultObj();

	struct FVector ServerSetViewPoint();
	void ServerSetEnabled(bool* bEnable);
	bool ServerSetDebugActor(class AActor** Actor);
	void ServerSetCategoryEnabled(int32* CategoryId, bool* bEnable);
	int32 ServerSendExtensionInputEvent();
	int32 ServerSendCategoryInputEvent(int32* CategoryId);
	void ServerResetViewPoint();
	void OnRep_ReplicatedData();
	void ClientDataPackPacket(const struct FGameplayDebuggerDataPackRPCParams& Params);
};

// 0x230 (0x258 - 0x28)
// Class GameplayDebugger.GameplayDebuggerConfig
class UGameplayDebuggerConfig : public UObject
{
public:
	struct FKey                                  ActivationKey;                                     // 0x28(0x18)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategoryRowNextKey;                                // 0x40(0x18)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategoryRowPrevKey;                                // 0x58(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot0;                                     // 0x70(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot1;                                     // 0x88(0x18)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot2;                                     // 0xA0(0x18)(BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot3;                                     // 0xB8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot4;                                     // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot5;                                     // 0xE8(0x18)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot6;                                     // 0x100(0x18)(BlueprintVisible, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot7;                                     // 0x118(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot8;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot9;                                     // 0x148(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugCanvasPaddingLeft;                            // 0x160(0x4)(Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugCanvasPaddingRight;                           // 0x164(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugCanvasPaddingTop;                             // 0x168(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugCanvasPaddingBottom;                          // 0x16C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDebugCanvasEnableTextShadow;                      // 0x170(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F3A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGameplayDebuggerCategoryConfig> Categories;                                        // 0x178(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst)
	TArray<struct FGameplayDebuggerExtensionConfig> Extensions;                                        // 0x188(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F3B[0xC0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayDebuggerConfig* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class GameplayDebugger.GameplayDebuggerUserSettings
class UGameplayDebuggerUserSettings : public UDeveloperSettings
{
public:
	uint8                                        bEnableGameplayDebuggerInEditor : 1;               // Mask: 0x1, PropSize: 0x10x38(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_25F : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2F3C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxViewDistance;                                   // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxViewAngle;                                      // 0x40(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        FontSize;                                          // 0x44(0x4)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayDebuggerUserSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GameplayDebugger.GameplayDebuggerLocalController
class UGameplayDebuggerLocalController : public UObject
{
public:
	class AGameplayDebuggerCategoryReplicator*   CachedReplicator;                                  // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class AGameplayDebuggerPlayerManager*        CachedPlayerManager;                               // 0x30(0x8)(Edit, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                DebugActorCandidate;                               // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UFont*                                 HUDFont;                                           // 0x40(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F3D[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayDebuggerLocalController* GetDefaultObj();

};

// 0x30 (0x4F8 - 0x4C8)
// Class GameplayDebugger.GameplayDebuggerPlayerManager
class AGameplayDebuggerPlayerManager : public AActor
{
public:
	uint8                                        Pad_2F3E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGameplayDebuggerPlayerData>   PlayerData;                                        // 0x4D0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<class AGameplayDebuggerCategoryReplicator*> PendingRegistrations;                              // 0x4E0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F3F[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AGameplayDebuggerPlayerManager* GetDefaultObj();

};

// 0x60 (0x750 - 0x6F0)
// Class GameplayDebugger.GameplayDebuggerRenderingComponent
class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_2F41[0x60];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayDebuggerRenderingComponent* GetDefaultObj();

};

}


