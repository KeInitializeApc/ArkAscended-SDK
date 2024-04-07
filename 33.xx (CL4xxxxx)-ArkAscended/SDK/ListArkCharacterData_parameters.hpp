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

// 0x18 (0x18 - 0x0)
// Function ListArkCharacterData.ListArkCharacterData_C.OnUploadedCharactersListingsLoaded
struct UListArkCharacterData_C_OnUploadedCharactersListingsLoaded_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_595C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FArkTributePlayerDataListing>  CharactersListings;                                // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ListArkCharacterData.ListArkCharacterData_C.ExecuteUbergraph_ListArkCharacterData
struct UListArkCharacterData_C_ExecuteUbergraph_ListArkCharacterData_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_Event_Success;                              // 0x4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_595D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FArkTributePlayerDataListing>  K2Node_Event_CharactersListings;                   // 0x8(0x10)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

}
}


