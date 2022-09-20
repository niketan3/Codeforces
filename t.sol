contract simple {
    uint data;
    function  setData(uint name) public {
        data=name;
    }
    function getData()public view returns (uint )
    {
        return data;
    }
}