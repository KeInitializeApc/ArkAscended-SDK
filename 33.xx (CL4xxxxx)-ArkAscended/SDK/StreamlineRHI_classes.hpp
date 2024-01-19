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
	enum class EStreamlineSettingOverride        EnableDLSSFGInPlayInEditorViewportsOverride;       // 0x28(0x1)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EStreamlineSettingOverride        LoadDebugOverlayOverride;                          // 0x29(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B87[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStreamlineOverrideSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class StreamlineRHI.StreamlineSettings
class UStreamlineSettings : public UObject
{
public:
	bool                                         bEnableStreamlineD3D12;                            // 0x28(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableStreamlineD3D11;                            // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableDLSSFGInPlayInEditorViewports;              // 0x2A(0x1)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bLoadDebugOverlay;                                 // 0x2B(0x1)(ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowOTAUpdate;                                   // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B8F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NVIDIANGXApplicationId;                            // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1B90[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStreamlineSettings* GetDefaultObj();

};

}


