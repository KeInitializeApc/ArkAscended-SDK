#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x80 - 0x0)
// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
struct UImageWriteBlueprintLibrary_ExportToDisk_Params
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	class FString                                Filename;                                          // 0x8(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	uint8                                        Pad_2926[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FImageWriteOptions                    Options;                                           // 0x20(0x60)(ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

}
}


