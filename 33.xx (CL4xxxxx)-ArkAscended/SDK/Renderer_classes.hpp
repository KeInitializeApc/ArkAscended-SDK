#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x6C0 - 0x690)
// Class Renderer.SparseVolumeTextureViewerComponent
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{
public:
	class USparseVolumeTexture*                  SparseVolumeTexturePreview;                        // 0x690(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAnimate : 1;                                      // Mask: 0x1, PropSize: 0x10x698(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_136 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2320[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        AnimationFrame;                                    // 0x69C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FrameRate;                                         // 0x6A0(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	float                                        AnimationTime;                                     // 0x6A4(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ComponentToVisualize;                              // 0x6A8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2321[0x14];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USparseVolumeTextureViewerComponent* GetDefaultObj();

};

// 0x8 (0x4C8 - 0x4C0)
// Class Renderer.SparseVolumeTextureViewer
class ASparseVolumeTextureViewer : public AInfo
{
public:
	class USparseVolumeTextureViewerComponent*   SparseVolumeTextureViewerComponent;                // 0x4C0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class ASparseVolumeTextureViewer* GetDefaultObj();

};

}


