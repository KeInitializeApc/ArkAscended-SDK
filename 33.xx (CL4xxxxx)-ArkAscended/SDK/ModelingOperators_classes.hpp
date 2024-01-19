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
	bool                                         bEnablePolygroupSupport;                           // 0xA8(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D0[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	enum class ERecomputeUVsPropertiesIslandMode IslandGeneration;                                  // 0xAC(0x4)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ERecomputeUVsPropertiesUnwrapType UnwrapType;                                        // 0xB0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ERecomputeUVsToolOrientationMode  AutoRotation;                                      // 0xB4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPreserveIrregularity;                             // 0xB8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D3[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        SmoothingSteps;                                    // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SmoothingAlpha;                                    // 0xC0(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MergingDistortionThreshold;                        // 0xC4(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MergingAngleThreshold;                             // 0xC8(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ERecomputeUVsPropertiesLayoutType LayoutType;                                        // 0xCC(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TextureResolution;                                 // 0xD0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        NormalizeScale;                                    // 0xD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableUDIMLayout;                                 // 0xD8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUDIMCVAREnabled;                                  // 0xD9(0x1)(ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D6[0x6];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URecomputeUVsToolProperties* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ModelingOperators.UVLayoutProperties
class UUVLayoutProperties : public UInteractiveToolPropertySet
{
public:
	enum class EUVLayoutType                     LayoutType;                                        // 0xA8(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TextureResolution;                                 // 0xAC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Scale;                                             // 0xB0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_DB[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Translation;                                       // 0xB8(0x10)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	bool                                         bAllowFlips;                                       // 0xC8(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableUDIMLayout;                                 // 0xC9(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUDIMCVAREnabled;                                  // 0xCA(0x1)(ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_DC[0x5];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUVLayoutProperties* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingOperators.RecomputeUVsOpFactory
class URecomputeUVsOpFactory : public UObject
{
public:
	uint8                                        Pad_DD[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	class URecomputeUVsToolProperties*           Settings;                                          // 0x30(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_DE[0x108];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URecomputeUVsOpFactory* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingOperators.UVLayoutOperatorFactory
class UUVLayoutOperatorFactory : public UObject
{
public:
	uint8                                        Pad_E0[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	class UUVLayoutProperties*                   Settings;                                          // 0x30(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_E1[0x108];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUVLayoutOperatorFactory* GetDefaultObj();

};

}


