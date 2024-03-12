#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x580 - 0x4C0)
// Class GameplayDebugger.GameplayDebuggerCategoryReplicator
class AGameplayDebuggerCategoryReplicator : public AActor
{
public:
	class APlayerController*                     OwnerPC;                                           // 0x4C0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsEnabled;                                        // 0x4C8(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_1371[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGameplayDebuggerNetPack              ReplicatedData;                                    // 0x4D0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGameplayDebuggerDebugActor           DebugActor;                                        // 0x4E8(0x14)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1373[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGameplayDebuggerVisLogSync           VisLogSync;                                        // 0x500(0x10)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UGameplayDebuggerRenderingComponent*   RenderingComp;                                     // 0x510(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1374[0x68];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FGameplayDebuggerDataPackRPCParams ClientDataPackPacket();
};

// 0x230 (0x258 - 0x28)
// Class GameplayDebugger.GameplayDebuggerConfig
class UGameplayDebuggerConfig : public UObject
{
public:
	struct FKey                                  ActivationKey;                                     // 0x28(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategoryRowNextKey;                                // 0x40(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategoryRowPrevKey;                                // 0x58(0x18)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot0;                                     // 0x70(0x18)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot1;                                     // 0x88(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot2;                                     // 0xA0(0x18)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot3;                                     // 0xB8(0x18)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot4;                                     // 0xD0(0x18)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot5;                                     // 0xE8(0x18)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot6;                                     // 0x100(0x18)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot7;                                     // 0x118(0x18)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot8;                                     // 0x130(0x18)(Edit, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FKey                                  CategorySlot9;                                     // 0x148(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugCanvasPaddingLeft;                            // 0x160(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugCanvasPaddingRight;                           // 0x164(0x4)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugCanvasPaddingTop;                             // 0x168(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DebugCanvasPaddingBottom;                          // 0x16C(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDebugCanvasEnableTextShadow;                      // 0x170(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_137C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGameplayDebuggerCategoryConfig> Categories;                                        // 0x178(0x10)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, EditConst)
	TArray<struct FGameplayDebuggerExtensionConfig> Extensions;                                        // 0x188(0x10)(ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_137D[0xC0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayDebuggerConfig* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class GameplayDebugger.GameplayDebuggerUserSettings
class UGameplayDebuggerUserSettings : public UDeveloperSettings
{
public:
	uint8                                        bEnableGameplayDebuggerInEditor : 1;               // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_8D : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1381[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxViewDistance;                                   // 0x3C(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxViewAngle;                                      // 0x40(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        FontSize;                                          // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayDebuggerUserSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GameplayDebugger.GameplayDebuggerLocalController
class UGameplayDebuggerLocalController : public UObject
{
public:
	class AGameplayDebuggerCategoryReplicator*   CachedReplicator;                                  // 0x28(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AGameplayDebuggerPlayerManager*        CachedPlayerManager;                               // 0x30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                DebugActorCandidate;                               // 0x38(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UFont*                                 HUDFont;                                           // 0x40(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1385[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayDebuggerLocalController* GetDefaultObj();

};

// 0x30 (0x4F0 - 0x4C0)
// Class GameplayDebugger.GameplayDebuggerPlayerManager
class AGameplayDebuggerPlayerManager : public AActor
{
public:
	uint8                                        Pad_1387[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGameplayDebuggerPlayerData>   PlayerData;                                        // 0x4C8(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AGameplayDebuggerCategoryReplicator*> PendingRegistrations;                              // 0x4D8(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1388[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AGameplayDebuggerPlayerManager* GetDefaultObj();

};

// 0x60 (0x740 - 0x6E0)
// Class GameplayDebugger.GameplayDebuggerRenderingComponent
class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_138C[0x60];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayDebuggerRenderingComponent* GetDefaultObj();

};

}


