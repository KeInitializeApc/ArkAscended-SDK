#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDesiredImageFormat : uint8
{
	PNG                            = 0,
	JPG                            = 1,
	BMP                            = 2,
	EXR                            = 3,
	EDesiredImageFormat_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// ScriptStruct ImageWriteQueue.ImageWriteOptions
struct FImageWriteOptions
{
public:
	enum class EDesiredImageFormat               Format;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_2927[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnComplete;                                        // 0x4(0x10)(Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        CompressionQuality;                                // 0x14(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bOverwriteFile;                                    // 0x18(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bAsync;                                            // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2928[0x46];                                    // Fixing Size Of Struct > TateDumper <
};

}


