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
	uint8                                        Pad_D85[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PrimPath;                                          // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class USceneComponent>        SceneComponent;                                    // 0x50(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	TMap<class FString, class UUsdPrimTwin*>     Children;                                          // 0x58(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	TWeakObjectPtr<class UUsdPrimTwin>           Parent;                                            // 0xA8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUsdPrimTwin* GetDefaultObj();

};

// 0x290 (0x758 - 0x4C8)
// Class USDStage.UsdStageActor
class AUsdStageActor : public AActor
{
public:
	struct FFilePath                             RootLayer;                                         // 0x4C8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UUsdAssetCache2*                       UsdAssetCache;                                     // 0x4D8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	enum class EUsdInitialLoadSet                InitialLoadSet;                                    // 0x4E0(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EUsdInterpolationType             InterpolationType;                                 // 0x4E1(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D91[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        KindsToCollapse;                                   // 0x4E4(0x4)(Edit, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bMergeIdenticalMaterialSlots;                      // 0x4E8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCollapseTopLevelPointInstancers;                  // 0x4E9(0x1)(Edit, ExportObject, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D92[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        PurposesToLoad;                                    // 0x4EC(0x4)(Edit, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NaniteTriangleThreshold;                           // 0x4F0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  RenderContext;                                     // 0x4F4(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  MaterialPurpose;                                   // 0x4FC(0x8)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EUsdRootMotionHandling            RootMotionHandling;                                // 0x504(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D93[0x78];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       SceneComponent;                                    // 0x580(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	float                                        Time;                                              // 0x588(0x4)(Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D94[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class ULevelSequence*                        LevelSequence;                                     // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class UUsdPrimTwin*                          RootUsdTwin;                                       // 0x598(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<class FString>                          PrimsToAnimate;                                    // 0x5A0(0x50)(ConstParm, ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class UObject*, class FString>          ObjectsToWatch;                                    // 0x5F0(0x50)(ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UUsdAssetCache*                        AssetCache;                                        // 0x640(0x8)(ConstParm, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UUsdTransactor*                        Transactor;                                        // 0x648(0x8)(BlueprintVisible, ExportObject, Net, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D95[0x108];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AUsdStageActor* GetDefaultObj();

	void SetTime(float InTime);
	void SetRootMotionHandling(enum class EUsdRootMotionHandling NewHandlingStrategy);
	void SetRootLayer(const class FString& RootFilePath);
	void SetRenderContext(class FName NewRenderContext);
	void SetPurposesToLoad(int32 NewPurposesToLoad);
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
	float GetTime();
	class FString GetSourcePrimPath(class UObject** Object);
	class ULevelSequence* GetLevelSequence();
	class FString GetIsolatedRootLayer();
	class USceneComponent* GetGeneratedComponent();
	TArray<class UObject*> GetGeneratedAssets();
};

// 0x10 (0x38 - 0x28)
// Class USDStage.UsdTransactor
class UUsdTransactor : public UObject
{
public:
	uint8                                        Pad_D97[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUsdTransactor* GetDefaultObj();

};

}


