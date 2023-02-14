#pragma once
#include <d3d11.h>

class SwapChain;



class DeviceContext {
public: 

	DeviceContext(ID3D11DeviceContext* device_context);
	bool clearRenderTargetColor(SwapChain* swap_cahin, float red, float green, float blue, float alpha);
	void setVertexBuffer(VertexBuffer* vertex_buffer);
	void drawTriangleList(UINT vertex_count, UINT start_vertex_index);
	void setViewportSize(UINT width, UINT height);
	bool release();
	~DeviceContext();

private: 
	ID3D11DeviceContext* m_device_context;

};