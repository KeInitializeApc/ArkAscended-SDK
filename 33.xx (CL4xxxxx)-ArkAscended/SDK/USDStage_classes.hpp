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
	uint8                                        Pad_91A[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PrimPath;                                          // 0x40(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
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
	struct FFilePath                             RootLayer;                                         // 0x4C8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UUsdAssetCache2*                       UsdAssetCache;                                     // 0x4D8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	enum class EUsdInitialLoadSet                InitialLoadSet;                                    // 0x4E0(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EUsdInterpolationType             InterpolationType;                                 // 0x4E1(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_97F[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        KindsToCollapse;                                   // 0x4E4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bMergeIdenticalMaterialSlots;                      // 0x4E8(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCollapseTopLevelPointInstancers;                  // 0x4E9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_981[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        PurposesToLoad;                                    // 0x4EC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NaniteTriangleThreshold;                           // 0x4F0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  RenderContext;                                     // 0x4F4(0x8)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  MaterialPurpose;                                   // 0x4FC(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EUsdRootMotionHandling            RootMotionHandling;                                // 0x504(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_98C[0x78];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       SceneComponent;                                    // 0x580(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	float                                        Time;                                              // 0x588(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_98E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class ULevelSequence*                        LevelSequence;                                     // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class UUsdPrimTwin*                          RootUsdTwin;                                       // 0x598(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<class FString>                          PrimsToAnimate;                                    // 0x5A0(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class UObject*, class FString>          ObjectsToWatch;                                    // 0x5F0(0x50)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UUsdAssetCache*                        AssetCache;                                        // 0x640(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UUsdTransactor*                        Transactor;                                        // 0x648(0x8)(Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_992[0x108];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AUsdStageActor* GetDefaultObj();

	float SetTime();
	void SetRootMotionHandling(enum class EUsdRootMotionHandling* NewHandlingStrategy);
	void SetRootLayer(class FString* RootFilePath);
	void SetRenderContext(class FName* NewRenderContext);
	void SetPurposesToLoad(int32* NewPurposesToLoad);
	void SetNaniteTriangleThreshold(int32* NewNaniteTriangleThreshold);
	void SetMergeIdenticalMaterialSlots(bool* bMerge);
	void SetMaterialPurpose(class FName* NewMaterialPurpose);
	void SetKindsToCollapse(int32* NewKindsToCollapse);
	void SetIsolatedRootLayer(class FString* IsolatedStageRootLayer);
	enum class EUsdInterpolationType SetInterpolationType();
	void SetInitialLoadSet(enum class EUsdInitialLoadSet* NewLoadSet);
	void SetCollapseTopLevelPointInstancers(bool* bCollapse);
	void SetAssetCache(class UUsdAssetCache2** NewCache);
	void NewStage();
	void GetTime(float* ReturnValue);
	void GetSourcePrimPath(class UObject** Object, class FString* ReturnValue);
	void GetLevelSequence(class ULevelSequence** ReturnValue);
	void GetIsolatedRootLayer(class FString* ReturnValue);
	void GetGeneratedComponent(class FString* PrimPath, class USceneComponent** ReturnValue);
	void GetGeneratedAssets(class FString* PrimPath, TArray<class UObject*>* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class USDStage.UsdTransactor
class UUsdTransactor : public UObject
{
public:
	uint8                                        Pad_99D[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUsdTransactor* GetDefaultObj();

};

}


