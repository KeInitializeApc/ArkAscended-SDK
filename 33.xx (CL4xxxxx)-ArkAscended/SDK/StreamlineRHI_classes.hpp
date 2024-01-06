#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class StreamlineRHI.StreamlineOverrideSettings
class UStreamlineOverrideSettings : public UObject
{
public:
	enum class EStreamlineSettingOverride        EnableDLSSFGInPlayInEditorViewportsOverride;       // 0x28(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EStreamlineSettingOverride        LoadDebugOverlayOverride;                          // 0x29(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_162F[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStreamlineOverrideSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class StreamlineRHI.StreamlineSettings
class UStreamlineSettings : public UObject
{
public:
	bool                                         bEnableStreamlineD3D12;                            // 0x28(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableStreamlineD3D11;                            // 0x29(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableDLSSFGInPlayInEditorViewports;              // 0x2A(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bLoadDebugOverlay;                                 // 0x2B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowOTAUpdate;                                   // 0x2C(0x1)(ConstParm, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1634[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NVIDIANGXApplicationId;                            // 0x30(0x4)(Edit, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1635[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStreamlineSettings* GetDefaultObj();

};

}


