#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2F0 - 0x2F0)
// Class StaticMeshDescription.StaticMeshDescription
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:

	static class UClass* StaticClass();
	static class UStaticMeshDescription* GetDefaultObj();

	void SetVertexInstanceUV(struct FVertexInstanceID* VertexInstanceID, const struct FVector2D& UV, int32 UVIndex);
	class FName SetPolygonGroupMaterialSlotName(struct FPolygonGroupID* PolygonGroupID);
	void GetVertexInstanceUV(struct FVertexInstanceID* VertexInstanceID, int32 UVIndex, const struct FVector2D& ReturnValue);
	struct FVector CreateCube(struct FVector* Center, struct FPolygonGroupID* PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, const struct FPolygonID& PolygonID_PlusZ, const struct FPolygonID& PolygonID_MinusZ);
};

}


