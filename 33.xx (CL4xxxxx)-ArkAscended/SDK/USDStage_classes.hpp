#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xB0 - 0x28)
// Class USDStage.UsdPrimTwin
class UUsdPrimTwin : public UObject
{
public:
	uint8                                        Pad_F9[0x18];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                PrimPath;                                          // 0x40(0x10)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class USceneComponent>        SceneComponent;                                    // 0x50(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	TMap<class FString, class UUsdPrimTwin*>     Children;                                          // 0x58(0x50)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TWeakObjectPtr<class UUsdPrimTwin>           Parent;                                            // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUsdPrimTwin* GetDefaultObj();

};

// 0x290 (0x758 - 0x4C8)
// Class USDStage.UsdStageActor
class AUsdStageActor : public AActor
{
public:
	struct FFilePath                             RootLayer;                                         // 0x4C8(0x10)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UUsdAssetCache2*                       UsdAssetCache;                                     // 0x4D8(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	enum class EUsdInitialLoadSet                InitialLoadSet;                                    // 0x4E0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EUsdInterpolationType             InterpolationType;                                 // 0x4E1(0x1)(ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_113[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        KindsToCollapse;                                   // 0x4E4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bMergeIdenticalMaterialSlots;                      // 0x4E8(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCollapseTopLevelPointInstancers;                  // 0x4E9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_116[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        PurposesToLoad;                                    // 0x4EC(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NaniteTriangleThreshold;                           // 0x4F0(0x4)(Edit, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  RenderContext;                                     // 0x4F4(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  MaterialPurpose;                                   // 0x4FC(0x8)(BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EUsdRootMotionHandling            RootMotionHandling;                                // 0x504(0x4)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_119[0x78];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       SceneComponent;                                    // 0x580(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	float                                        Time;                                              // 0x588(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_11B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class ULevelSequence*                        LevelSequence;                                     // 0x590(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst)
	class UUsdPrimTwin*                          RootUsdTwin;                                       // 0x598(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TSet<class FString>                          PrimsToAnimate;                                    // 0x5A0(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class UObject*, class FString>          ObjectsToWatch;                                    // 0x5F0(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UUsdAssetCache*                        AssetCache;                                        // 0x640(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UUsdTransactor*                        Transactor;                                        // 0x648(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_120[0x108];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AUsdStageActor* GetDefaultObj();

	float SetTime();
	enum class EUsdRootMotionHandling SetRootMotionHandling();
	class FString SetRootLayer();
	class FName SetRenderContext();
	int32 SetPurposesToLoad();
	int32 SetNaniteTriangleThreshold();
	bool SetMergeIdenticalMaterialSlots();
	class FName SetMaterialPurpose();
	int32 SetKindsToCollapse();
	class FString SetIsolatedRootLayer();
	void SetInterpolationType(enum class EUsdInterpolationType NewType);
	enum class EUsdInitialLoadSet SetInitialLoadSet();
	bool SetCollapseTopLevelPointInstancers();
	class UUsdAssetCache2* SetAssetCache();
	void NewStage();
	void GetTime(float ReturnValue);
	void GetSourcePrimPath(class UObject** Object, const class FString& ReturnValue);
	void GetLevelSequence(class ULevelSequence* ReturnValue);
	void GetIsolatedRootLayer(const class FString& ReturnValue);
	class FString GetGeneratedComponent(class USceneComponent* ReturnValue);
	class FString GetGeneratedAssets(const TArray<class UObject*>& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class USDStage.UsdTransactor
class UUsdTransactor : public UObject
{
public:
	uint8                                        Pad_128[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUsdTransactor* GetDefaultObj();

};

}


