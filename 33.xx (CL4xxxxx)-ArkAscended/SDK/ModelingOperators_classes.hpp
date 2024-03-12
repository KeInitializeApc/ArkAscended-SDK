#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE0 - 0xA8)
// Class ModelingOperators.RecomputeUVsToolProperties
class URecomputeUVsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnablePolygroupSupport;                           // 0xA8(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_55[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	enum class ERecomputeUVsPropertiesIslandMode IslandGeneration;                                  // 0xAC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERecomputeUVsPropertiesUnwrapType UnwrapType;                                        // 0xB0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERecomputeUVsToolOrientationMode  AutoRotation;                                      // 0xB4(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPreserveIrregularity;                             // 0xB8(0x1)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_56[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        SmoothingSteps;                                    // 0xBC(0x4)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SmoothingAlpha;                                    // 0xC0(0x4)(Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MergingDistortionThreshold;                        // 0xC4(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MergingAngleThreshold;                             // 0xC8(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERecomputeUVsPropertiesLayoutType LayoutType;                                        // 0xCC(0x4)(EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        TextureResolution;                                 // 0xD0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        NormalizeScale;                                    // 0xD4(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableUDIMLayout;                                 // 0xD8(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUDIMCVAREnabled;                                  // 0xD9(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_59[0x6];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URecomputeUVsToolProperties* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ModelingOperators.UVLayoutProperties
class UUVLayoutProperties : public UInteractiveToolPropertySet
{
public:
	enum class EUVLayoutType                     LayoutType;                                        // 0xA8(0x4)(EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        TextureResolution;                                 // 0xAC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Scale;                                             // 0xB0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	uint8                                        Pad_5A[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Translation;                                       // 0xB8(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	bool                                         bAllowFlips;                                       // 0xC8(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableUDIMLayout;                                 // 0xC9(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUDIMCVAREnabled;                                  // 0xCA(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5E[0x5];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUVLayoutProperties* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingOperators.RecomputeUVsOpFactory
class URecomputeUVsOpFactory : public UObject
{
public:
	uint8                                        Pad_63[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	class URecomputeUVsToolProperties*           Settings;                                          // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_64[0x108];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URecomputeUVsOpFactory* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingOperators.UVLayoutOperatorFactory
class UUVLayoutOperatorFactory : public UObject
{
public:
	uint8                                        Pad_69[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	class UUVLayoutProperties*                   Settings;                                          // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_6A[0x108];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUVLayoutOperatorFactory* GetDefaultObj();

};

}


